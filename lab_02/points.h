#ifndef __POINTS_H__
#define __POINTS_H__

#include <cstdio>
#include <cstdlib>
#include <cstdint>

#include "errors.h"
#include "point.h"

struct points_t
{
    point_t *arr;
    size_t count;
};

/**
    @brief Функция инициализирует структуру типа points_t.
    Устанавливает указатель arr на nullptr и поле count на 0.
    @param points Структура типа points_t для инициализации.
*/
void initPoints(points_t &points);

/**
    @brief Выделяет память под массив точек.
    @param points Ссылка на структуру, содержащую массив точек и количество точек.
    @return int Код ошибки (PASS, MEMORY_ALLOCATE_ERROR).
*/
int allocateArrPoint(points_t &points);

/**
    @brief Считывает количество точек из файла и проверяет его на корректность.
    @param in_file Файл, из которого производится чтение.
    @param points структура точек, количество которых нужно определить.
    @return int Код ошибки.
*/
int loadCountPoints(FILE *in_file, points_t &points);

/**
    @brief Считывает координаты точек из файла в массив точек.
    @param in_file Указатель на файл, из которого считываются данные.
    @param points Структура, хранящая массив точек и их количество.
    @return int Код ошибки
*/
int loadArrPoints(FILE *in_file, points_t &points);
/**
    @brief Загружает точки из файла
    Функция загружает из файла количество точек и сами точки.
    @param in_file Файл для чтения точек
    @param points Структура для хранения точек
    @return Код ошибки или успех (PASS)
 */
int loadPoints(FILE *f, points_t &points);

/**
    @brief Функция для перемещения точек на заданный вектор.
    @param[in,out] points Ссылка на структуру с массивом точек, которые необходимо переместить.
    @param[in] transfer_coef Коэффициент перемещения в виде вектора с координатами x, y, z.
    @return Код результата операции: PASS в случае успешного перемещения, ERR_NULL_PTR в случае, если переданный массив точек равен nullptr.
*/
int transferPoints(points_t &points, const point_t &transfer_coef);

/**

    Функция для масштабирования массива точек относительно центра.
    @param[in,out] points Ссылка на структуру с массивом точек, которые необходимо масштабировать.
    @param[in] center Центр масштабирования в виде точки с координатами x, y, z.
    @param[in] transfer_coef Коэффициент масштабирования в виде вектора с координатами x, y, z.
    @return Код результата операции: PASS в случае успешного масштабирования, ERR_NULL_PTR в случае, если переданный массив точек равен nullptr.
*/
int scalePoints(points_t &points, const point_t &center, const point_t &coefs);

/**
    @brief Вращает массив точек относительно центра и угла
    @param points Массив точек, который нужно повернуть
    @param center Координаты центра вращения в формате (x, y, z)
    @param angle Угол поворота вокруг каждой оси в формате (x, y, z)
    @return int Код результата операции: ERR_NULL_PTR - указатель на массив точек является нулевым, PASS - операция выполнена успешно
    */
int rotatePoints(points_t &points, const point_t &center, const double angle);

/**
    @brief Освобождает память, занятую массивом точек.
    @param points структура точек.
*/
void freeArrPoint(points_t &points);

#endif // __POINTS_H__
