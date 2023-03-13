#ifndef __OBECT_H__
#define __OBECT_H__

#include <cstdio>

#include "points.h"
#include "ribs.h"
#include "errors.h"
#include "draw.h"

struct threeDobject_t
{
    points_t points; // структура с массивом структур точек
    ribs_t ribs;     // структура с массивом структур ребер
    points_t ellipse;
    ribs_t ellipse_ribs;

};

/**
    @brief Инициализирует трехмерный объект.
    Эта функция инициализирует трехмерный объект путем создания статического экземпляра
    threeDobject_t и инициализации его точек и ребер с помощью функций initPoints и initRibs.
    @return Структура threeDobject_t, содержащая инициализированные точки и ребра объекта.
*/
threeDobject_t &initObj(void);

/**

    @brief Загружает трехмерный объект из файла
    @param[in] name_f Имя файла, из которого необходимо загрузить объект
    @param[out] obj Загруженный объект
    @return int Код ошибки
*/
int loadObjFromFile(const char *&name_f, threeDobject_t &obj);

int drawObj(canvas_t &scene, const threeDobject_t &obj);

int transferObj(threeDobject_t &obj, const point_t transfer_coef);

int scaleObj(threeDobject_t &obj, const point_t &center, const point_t &scale_coef);

int rotateObj(threeDobject_t &obj, const point_t &center, const double rotate_coef);

int getCentrObj(threeDobject_t &obj, point_t &centr);

int copy_Obj(threeDobject_t &obj, threeDobject_t &tmp_obj);

/**
    @brief Освобождает память, занятую объектом трехмерной фигуры.
    @param obj Объект трехмерной фигуры.
*/
void freeObj(threeDobject_t &figure);

#endif // __OBECT_H__
