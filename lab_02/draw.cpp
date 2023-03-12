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

void drawCircle(const canvas_t &scene, const double diam_x, const double diam_y, const double x_centr, const double y_centr, const double angle)
{
    qreal diameter_x = diam_x;
    qreal diameter_y = diam_y;

    qreal x = x_centr + scene.width / 2 - diameter_x / 2;
    qreal y = -y_centr + scene.height / 2 - diameter_y / 2; // осб н направлена в верх

    QPen pen(Qt::black);           // Set the pen color to black.
    QBrush brush(Qt::transparent); // Set the brush color to transparent.

    QGraphicsEllipseItem *ellipse = scene.canvas->addEllipse(x, y, diameter_x, diameter_y, pen, brush);
    qreal angleDegrees = angle;
    qreal startAngle = angleDegrees;     // Задайте начальный угол в градусах.
    qreal endAngle = 180 + angleDegrees; // Задайте конечный угол в градусах.
    // Изменяем свойства круга, чтобы он стал полукругом.
    ellipse->setStartAngle(startAngle * 16);
    ellipse->setSpanAngle(endAngle * 16 - startAngle * 16);
}

void drawElleps(const canvas_t &scene, double x1, double x2, double y1, double y2, double const angle, bool is_top)
{
    QPointF point1(x1 + scene.width / 2, -y1 + scene.height / 2);
    QPointF point2(x2 + scene.width / 2, -y2 + scene.height / 2);

    QPointF center = (point1 + point2) / 2;        // Находим центр эллипса
    qreal a = QLineF(point1, point2).length() / 2; // Находим длину большой полуоси
    qreal b = a / 2;                               // Задаем длину малой полуоси

    QGraphicsEllipseItem *ellipse = scene.canvas->addEllipse(center.x() - a, center.y() - b, 2 * a, 2 * b); // Создаем QGraphicsEllipseItem
    ellipse->setTransformOriginPoint(center);
    qreal angleDegrees = angle;

    if (is_top)
    {
        ellipse->setStartAngle(0);                                      // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }
    else
    {
        ellipse->setStartAngle(0);        // Устанавливаем начальный угол полуэллипса в зависимости от направления
        ellipse->setSpanAngle(-180 * 16); // Устанавливаем угол дуги полуэллипса в зависимости от направления
    }

    ellipse->setRotation(-angleDegrees);
}
