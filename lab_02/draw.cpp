#include <cstdio>
#include "draw.h"
#include <math.h>
#include <QGraphicsEllipseItem>
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

void drawElleps(const canvas_t &scene, point_t edit_diam, point_t one_p, point_t two_p, double const angle, int flag_whitch_ellips)
{

    QPointF point1(one_p.x + scene.width / 2, -one_p.y + scene.height / 2);
    QPointF point2(two_p.x + scene.width / 2, -two_p.y + scene.height / 2);

    QPointF center = (point1 + point2) / 2; // Находим центр эллипса
    qreal a = edit_diam.x;                  // Находим длину большой полуоси
    qreal b = QLineF(point1, point2).length() / 2;
    

    if (flag_whitch_ellips == TOP_ELLEPS || flag_whitch_ellips == BOT_ELLEPS) // Задаем длину малой полуоси
    {
        a = QLineF(point1, point2).length() / 2; // Находим длину большой полуоси
        b = a / 2;
    }

    qreal diam_x = a * 2;
    qreal diam_y = b * 2;

    QGraphicsEllipseItem *ellipse = scene.canvas->addEllipse(center.x() - a, center.y() - b, diam_x, diam_y); // Создаем QGraphicsEllipseItem
    ellipse->setTransformOriginPoint(center);
    qreal angleDegrees =  qRadiansToDegrees(qAtan2(point1.y() - point2.y(), point1.x() - point2.x()));;

    if (flag_whitch_ellips == BOT_ELLEPS)
    {
        ellipse->setStartAngle(0);        // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(-180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }
    else
    {
        ellipse->setStartAngle(0);       // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }
    ellipse->setRotation(-angleDegrees);
}
