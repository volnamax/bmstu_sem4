#ifndef __DRAW_H__
#define __DRAW_H__

#include <QGraphicsScene>

#include "point.h"
#include "points.h"

#include "errors.h"

struct canvas_t
{
    QGraphicsScene *canvas;
    double width;
    double height;
};

void drawline(const canvas_t &scene, const point_t &first_point, const point_t &second_point);
void clearAll(const canvas_t &scene);
void drawCircle(const canvas_t &scene, const double diam_x, const double diam_y, const double x_centr, const double y_centr, const double angle);
void drawElleps(const canvas_t &scene, double x1, double x2, double y1, double y2, double const angle, bool is_top);

#endif // __DRAW_H__
