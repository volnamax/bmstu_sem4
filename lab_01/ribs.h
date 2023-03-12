#ifndef __RIBS_H__
#define __RIBS_H__

#include <cstdio>
#include <cstdlib>

#include "points.h"
#include "draw.h"
#include "errors.h"
#include "rib.h"

struct ribs_t
{
    rib_t *arr;
    size_t count;
};

/**

    @brief Функция инициализирует структуру типа ribs_t.
    Устанавливает указатель arr на nullptr и поле count на 0.
    @param ribs Структура типа ribs_t для инициализации.
*/
void initRibs(ribs_t &ribs);

/**

    @brief Считывает количество ребер из файла и сохраняет в переменную ribs.count
    @param f Указатель на файл, из которого считывается количество ребер
    @param ribs Структура, в которую сохраняется количество ребер
    @return int Код ошибки или успешного выполнения
*/
int loadCountRibs(FILE *in_file, ribs_t &ribs);

/*
    @brief Выделяет память для массива ребер заданного размера.
    @param ribs Ссылка на структуру массива ребер.
    @return int Код ошибки (PASS, ERR_ALLOCATE).
*/
int allocateArrRibs(ribs_t &ribs);

/**
    @brief Загружает массив ребер из файла.
    Функция читает данные из входного файла и сохраняет их в массиве ребер @p ribs.
    @param in_file Указатель на открытый входной файл.
    @param ribs Массив ребер, в который будут сохранены данные.
    @return Код ошибки или 0 (PASS), если загрузка прошла успешно.
*/
int loadArrRibs(FILE *in_file, ribs_t &ribs);

/**
    @brief Загружает ребра из файла
    @param in_file Указатель на файл, из которого будут загружены данные
    @param ribs Структура, которая будет заполнена данными о ребрах
    @return int Код ошибки (PASS, ERR_NULL_PTR, ERR_READ_COUNT_RIBS, ERR_ALLOCATE, ERR_READ_RIBS, ERR_RIBS)
 */
int loadRibs(FILE *f, ribs_t &ribs);

/**
    Проверяет, что все ребра заданы корректно и не выходят за пределы диапазона индексов точек.
    @param ribs массив ребер для проверки
    @param points_count количество точек, доступных для индексации
    @return код ошибки (PASS если все проверки пройдены успешно)
*/
int checkRibs(ribs_t &ribs, size_t &points_count);

/**
    @brief Отрисовывает ребра на сцене.
    @param scene - холст для отрисовки.
    @param points - структура с информацией о точках.
    @param ribs - структура с информацией о ребрах.
    @return int - статус завершения функции.
*/
int drawRibs(canvas_t &scene, const points_t &points, const ribs_t &ribs);

/**
    @brief Освобождает память, занятую массивом связей ребер.
    @param ribs Массив связей ребер.
*/
void freeArrRibs(ribs_t &ribs);

#endif // __RIBS_H__
