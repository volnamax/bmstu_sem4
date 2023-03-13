#ifndef __DRAW_H__
#define __DRAW_H__

#include <QGraphicsScene>

#include "point.h"
#include "errors.h"






struct canvas_t
{
    QGraphicsScene *canvas;
    double width;
    double height;
};

void drawline(const canvas_t &scene, const point_t &first_point, const point_t &second_point);
void clearAll(const canvas_t &scene);

#endif // __DRAW_H__
