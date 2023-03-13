#include <cstdio>
#include "draw.h"
#include <math.h>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QPointF>
#include <QVector>
#include <cmath>
#include <iostream>

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QDebug>

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

void drawElleps(const canvas_t &scene)
{

    QPointF point1(200 + scene.width / 2, -100 + scene.height / 2);
    QPointF point2(200 + scene.width / 2, -0 + scene.height / 2);

    QPointF center = (point1 + point2) / 2;        // Находим центр эллипса
    qreal a = QLineF(point1, point2).length() / 2; // Находим длину большой полуоси
    qreal b = a;                               // Задаем длину малой полуоси

    QGraphicsEllipseItem *ellipse = scene.canvas->addEllipse(center.x() - a, center.y() - b, 2 * a, 2 * b); // Создаем QGraphicsEllipseItem
    ellipse->setTransformOriginPoint(center);

    scene.canvas->addItem(ellipse);
    
    QPainterPath path;
    path.addEllipse(ellipse->rect());

    qreal step = 0.01;
    QList<QPointF> points;
    for (qreal t = 0; t < 1; t += step)
    {
        QPointF point = path.pointAtPercent(t);
        points.append(ellipse->mapToScene(point));
    }

    points.append(ellipse->mapToScene(path.pointAtPercent(1)));

    qDebug() << "Ellipse points:";
    foreach (QPointF point, points)
    {
        qDebug() << point;
    }

    printf("\n\n%d\n\n", points.size());

    for (int i = 203; i < 203 + points.size() - 1; i++)
        printf("%d %d\n", i, i + 1);

    printf("\n\n%d\n\n", points.size());
    for (int i = points.size() - 1; i != -1; i--)
    {
        printf("%lf %lf\n", points[i].x() - scene.width / 2, -(points[i].y() - scene.height / 2));
    }
}
