#include <cstdio>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <math.h>
#include <QGraphicsLineItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // инициализация сцены
    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    scene->setSceneRect(0, 0, 1, 1);
    // Настраиваем сетку
    QPen gridPen(Qt::lightGray, 1, Qt::DotLine);
    QGraphicsItemGroup *grid = new QGraphicsItemGroup();
    for (int x = -50; x <= 50; x += 10)
    {
        QGraphicsLineItem *line = scene->addLine(x, -50, x, 50, gridPen);
        line->setZValue(-1);
        QGraphicsTextItem *label = scene->addText(QString::number(x));
        label->setPos(x - 5, -15);
        grid->addToGroup(line);
        grid->addToGroup(label);
    }
    for (int y = -50; y <= 50; y += 10)
    {
        QGraphicsLineItem *line = scene->addLine(-50, y, 50, y, gridPen);
        line->setZValue(-1);
        QGraphicsTextItem *label = scene->addText(QString::number(y));
        label->setPos(-20, y - 5);
        grid->addToGroup(line);
        grid->addToGroup(label);
    }
    scene->addItem(grid);

    // Создаем оси координат
    QPen axisPen(Qt::black, 2, Qt::SolidLine);
    QGraphicsLineItem *xAxis = scene->addLine(-50, 0, 50, 0, axisPen);
    QGraphicsLineItem *yAxis = scene->addLine(0, -50, 0, 50, axisPen);
    xAxis->setZValue(1);
    yAxis->setZValue(1);
    QGraphicsTextItem *xLabel = scene->addText("x");
    xLabel->setPos(50, -20);
    QGraphicsTextItem *yLabel = scene->addText("y");
    yLabel->setPos(-20, 50);
}

canvas_t MainWindow::updateScene(void)
{
    // обновляем размеры полотна
    
    QGraphicsScene *scene = ui->graphicsView->scene();

    // очищаем сцену от всех элементов, кроме сетки и осей
    QList<QGraphicsItem *> items = scene->items();
    for (QGraphicsItem *item : items)
    {
        if (item != grid && item != xAxis && item != yAxis)
        {
            scene->removeItem(item);
            delete item;
        }
    }

    // создаем новые элементы и добавляем их на сцену
    // ...

    // перерисовываем сцену
    ui->graphicsView->viewport()->update();

    canvas_t scene;
    scene.canvas = ui->graphicsView->scene();
    scene.width = ui->graphicsView->width();
    scene.height = ui->graphicsView->height();
    return scene;
}

void MainWindow::drawScene(action_t &action)
{
    // обновляем размеры полотна
    canvas_t scene = updateScene();
    action = getActionDraw(scene);

    int rc = doAction(action);
    if (rc != PASS)
        printErrMsg(rc);
}

void MainWindow::convertToStr(double num, char *str)
{
    num = floor(num * 100) / 100;
    snprintf(str, 7, "%lf", num);
}

void MainWindow::updateCentrObj(action_t action)
{
    char str[20] = {0};
    convertToStr(action.obj_centr.y, str);
    ui->labelY->setText(str);
    convertToStr(action.obj_centr.x, str);
    ui->labelX->setText(str);
}

// загрузка объекта
void MainWindow::on_downloadFigure_clicked()
{
    action_t action = getActionLoad();
    int rc = doAction(action);

    if (rc == PASS)
    {
        drawScene(action);
        action = getActionUpdateCentrObj();
        doAction(action);
        updateCentrObj(action);
    }
    else
        printErrMsg(rc);
}
// перемещение
void MainWindow::on_dxButton_clicked()
{
    point_t transfer_coef;
    transfer_coef.x = ui->dxDouble->value();
    transfer_coef.y = ui->dyDouble->value();

    action_t action = getActionTransfer(transfer_coef);

    int rc = doAction(action);
    if (rc == PASS)
    {

        drawScene(action);

        action = getActionUpdateCentrObj();
        doAction(action);
        updateCentrObj(action);
    }

    else
        printErrMsg(rc);
}

// масшабирование
void MainWindow::on_kxButton_clicked()
{
    point_t center;
    center.x = ui->kxCentrDouble->value();
    center.y = ui->kyCentrDouble->value();

    point_t scale;
    scale.x = ui->kxDouble->value();
    scale.y = ui->kyDouble->value();

    action_t action = getActionScale(center, scale);

    int rc = doAction(action);

    if (rc == PASS)
    {
        drawScene(action);

        action = getActionUpdateCentrObj();
        doAction(action);
        updateCentrObj(action);
    }
    else
        printErrMsg(rc);
}
// поворот
void MainWindow::on_AngleButton_clicked()
{
    point_t center;
    center.x = ui->AngleCentrXDouble->value();
    center.y = ui->AngleCentrYDouble->value();

    double angle;
    angle = ui->AngleXDouble->value();

    action_t action = getActionRotate(center, angle);
    action.tmp_angle = angle;
    int rc = doAction(action);

    if (rc == PASS)
    {
        drawScene(action);

        action = getActionUpdateCentrObj();
        doAction(action);
        updateCentrObj(action);
    }
    else
        printErrMsg(rc);
}

void MainWindow::on_stepButton_clicked()
{
    ;
}

MainWindow::~MainWindow()
{
    action_t action = getActionClose();
    doAction(action);
    delete ui; // закрытие окна
}
