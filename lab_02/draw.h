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

#define TOP_ELLEPS 1
#define BOT_ELLEPS 0
#define LEFT_ELLEPS 2
#define RIGHT_ELLEPS 3

void drawline(const canvas_t &scene, const point_t &first_point, const point_t &second_point);
void clearAll(const canvas_t &scene);
void drawElleps(const canvas_t &scene, point_t edit_diam, point_t one_p, point_t two_p, double const angle, int flag_whitch_ellips);

#endif // __DRAW_H__
