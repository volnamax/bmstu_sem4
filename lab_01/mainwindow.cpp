#include <cstdio>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // инициализация сцены
    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    scene->setSceneRect(0, 0, 1, 1);
}

canvas_t MainWindow::updateScene(void)
{
    // обновляем размеры полотна
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
    snprintf(str, 10, "%lf", num);
}

void MainWindow::updateCentrObj(action_t action)
{
    char str[20] = {0};

    convertToStr(action.center_obj.y, str);
    ui->centrValueY->setText(str);

    convertToStr(action.center_obj.x, str);
    ui->centrValueX->setText(str);

    convertToStr(action.center_obj.z, str);
    ui->centrValueZ->setText(str);
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
    transfer_coef.z = ui->dzDouble->value();

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
    center.z = ui->kzCentrDouble->value();

    point_t scale;
    scale.x = ui->kxDouble->value();
    scale.y = ui->kyDouble->value();
    scale.z = ui->kzDouble->value();

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
    center.z = ui->AngleCentrZDouble->value();

    point_t angle;
    angle.x = ui->AngleXDouble->value();
    angle.y = ui->AngleYDouble->value();
    angle.z = ui->AngleZDouble->value();

    action_t action = getActionRotate(center, angle);

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

MainWindow::~MainWindow()
{
    action_t action = getActionClose();
    doAction(action);
    delete ui; // закрытие окна
}
