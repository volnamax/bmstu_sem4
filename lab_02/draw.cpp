#include <cstdio>
#include "draw.h"
#include <math.h>
#include <QGraphicsEllipseItem>
#include <QGraphicsPathItem>
#include <QPainterPath>
#include <QtMath>

void clearAll(const canvas_t &scene)
{
    scene.canvas->clear();
}

void drawline(const canvas_t &scene, const point_t &first_point, const point_t &second_point)
{
    // деление на два чтобы коректно отображать на холсте(центр ) - перед у чтоб ось у была правлена вверх
    scene.canvas->addLine(first_point.x + scene.width / 2, -first_point.y + scene.height / 2,
                          second_point.x + scene.width / 2, -second_point.y + scene.height / 2);
}

void drawElleps(const canvas_t &scene, points_t rec, double angle)
{
    QPointF p1(rec.arr[0].x + scene.width / 2, -rec.arr[0].y + scene.height / 2);
    QPointF p2(rec.arr[1].x + scene.width / 2, -rec.arr[1].y + scene.height / 2);
    QPointF p3(rec.arr[2].x + scene.width / 2, -rec.arr[2].y + scene.height / 2);
    QPointF p4(rec.arr[3].x + scene.width / 2, -rec.arr[3].y + scene.height / 2);

    // Создаем объекты QGraphicsLineItem для отображения линий, зажимающих эллипс
    QGraphicsLineItem *line1Item = new QGraphicsLineItem(p1.x(), p1.y(), p2.x(), p2.y());
    QGraphicsLineItem *line2Item = new QGraphicsLineItem(p2.x(), p2.y(), p3.x(), p3.y());
    QGraphicsLineItem *line3Item = new QGraphicsLineItem(p3.x(), p3.y(), p4.x(), p4.y());
    QGraphicsLineItem *line4Item = new QGraphicsLineItem(p4.x(), p4.y(), p1.x(), p1.y());

    // Добавляем объекты QGraphicsEllipseItem и QGraphicsLineItem на QGraphicsScene
    scene.canvas->addItem(line1Item);
    scene.canvas->addItem(line2Item);
    scene.canvas->addItem(line3Item);
    scene.canvas->addItem(line4Item);



    qreal cx = (p1.x() + p2.x() + p3.x() + p4.x()) / 4;
    qreal cy = (p1.y() + p2.y() + p3.y() + p4.y()) / 4;

    qreal a = QLineF(p1, p2).length() / 2;
    qreal b = QLineF(p2, p3).length() / 2;

    QGraphicsEllipseItem *ellipse = new QGraphicsEllipseItem(cx - b, cy - a, 2 * b, 2 * a);
    QPointF center(cx, cy); // Находим центр эллипса
    ellipse->setTransformOriginPoint(center);
    ellipse->setRotation(-angle);
    scene.canvas->addItem(ellipse);
}
