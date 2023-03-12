#include <cstdio>
#include "draw.h"
#include <math.h>
#include <QGraphicsEllipseItem>

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

void drawElleps(const canvas_t &scene, point_t one_p, point_t two_p, double const angle, int flag_whitch_ellips)
{

    QPointF point1(one_p.x + scene.width / 2, -one_p.y + scene.height / 2);
    QPointF point2(two_p.x + scene.width / 2, -two_p.y + scene.height / 2);

    QPointF center = (point1 + point2) / 2;        // Находим центр эллипса
    qreal a = QLineF(point1, point2).length() / 2; // Находим длину большой полуоси
    qreal b = a;
    if (flag_whitch_ellips == TOP_ELLEPS || flag_whitch_ellips == BOT_ELLEPS) // Задаем длину малой полуоси
        b /= 2;

    QGraphicsEllipseItem *ellipse = scene.canvas->addEllipse(center.x() - a, center.y() - b, 2 * a, 2 * b); // Создаем QGraphicsEllipseItem
    ellipse->setTransformOriginPoint(center);
    qreal angleDegrees = angle;

    if (flag_whitch_ellips)
    {
        ellipse->setStartAngle(0);       // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }
    else
    {
        ellipse->setStartAngle(0);        // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(-180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }

    ellipse->setRotation(-angleDegrees);
}
