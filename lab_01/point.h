#ifndef __POINT_H__
#define __POINT_H__

#include <cstdio>
#include <limits.h>
#include <cmath>

#include "errors.h"

struct point_t
{
    double x;
    double y;
    double z;
};

int loadPoint(FILE *f, point_t &point);

/**
    Функция для перемещения точки на заданный вектор.
    @param[in,out] point Ссылка на структуру с координатами точки, которую необходимо переместить.
    @param[in] transfer_coef Коэффициент перемещения в виде вектора с координатами x, y, z.
    @return Отсутствует, так как функция не возвращает значения.
    */
void transferPoint(point_t &point, const point_t &coefs);

void transferPointCentr(point_t &point, const point_t &center);
void transferPointOrigin(point_t &point, const point_t &center);

void scalePoint(point_t &point, const point_t &center, const point_t &transfer_coef);

double getRad(const double &angle);
void rotatePointXYZ(point_t &point, const point_t &angle);
/**
    @brief Вращает точку относительно заданного центра и угла
    @param point Точка, которую нужно повернуть
    @param center Координаты центра вращения в формате (x, y, z)
    @param angle Угол поворота вокруг каждой оси в формате (x, y, z)
    @return void
    */
void rotatePoint(point_t &point, const point_t &center, const point_t &angle);

#endif // __POINT_H__
