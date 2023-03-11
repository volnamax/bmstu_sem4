#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

#include "draw.h"
#include "errors.h"
#include "do_action.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_downloadFigure_clicked();
    void on_dxButton_clicked();
    void on_kxButton_clicked();
    canvas_t updateScene(void);
    void drawScene(action_t &action);
    void on_AngleButton_clicked();
    void convertToStr(double num, char *str);
    void updateCentrObj(action_t action);
    void on_stepButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
