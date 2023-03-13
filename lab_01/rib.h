#ifndef __RIB_H__
#define __RIB_H__

#include <cstdio>

#include "points.h"
#include "draw.h"
#include "errors.h"

struct rib_t
{
    size_t first_point;
    size_t second_point;
};

int LoadRib(FILE *f, rib_t &rib);

/**
    @brief Рисует линию на канвасе между двумя точками, соединенными ребром
    @param scene Канвас, на котором нужно нарисовать ребра
    @param rib Ребро, которое нужно нарисовать
    @param points структура с  Массивом точек
    */
void drawrib(const canvas_t &scene, const rib_t &rib, const points_t &points);

#endif // __RIB_H__
