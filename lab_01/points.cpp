#include "points.h"

void initPoints(points_t &points)
{
    points.arr = nullptr;
    points.count = 0;
}

int allocateArrPoint(points_t &points)
{
    int rc = PASS;
    points.arr = (point_t *)malloc(points.count * sizeof(point_t));

    if (points.arr == nullptr)
        rc = ERR_ALLOCATE;

    return rc;
}

int loadCountPoints(FILE *in_file, points_t &points)
{
    if (in_file == nullptr)
        return ERR_NULL_PTR;

    int rc = PASS;

    if (fscanf(in_file, "%zu", &points.count) != 1)
        rc = ERR_READ_COUNT_POINTS;
    else if (points.count < 2 || points.count > SIZE_MAX)
        rc = ERR_COUNT_POINTS;

    return rc;
}

int loadArrPoints(FILE *in_file, points_t &points)
{
    if (in_file == nullptr || points.arr == nullptr)
        return ERR_NULL_PTR;

    int rc = PASS;

    for (size_t i = 0; i < points.count && rc == PASS; i++)
        rc = loadPoint(in_file, points.arr[i]);

    return rc;
}

int loadPoints(FILE *in_file, points_t &points)
{
    if (in_file == nullptr || points.arr != nullptr)
        return ERR_NULL_PTR;
    // в начале файла идет кол-во точек проверка количества точек и считывание
    int rc = loadCountPoints(in_file, points);
    if (rc == PASS)
    {
        rc = allocateArrPoint(points);
        if (rc == PASS)
        {
            rc = loadArrPoints(in_file, points);
            if (rc != PASS)
                freeArrPoint(points);
        }
    }

    return rc;
}

int transferPoints(points_t &points, const point_t &transfer_coef)
{
    if (points.arr == nullptr)
        return ERR_NULL_PTR;

    for (size_t i = 0; i < points.count; i++)
        transferPoint(points.arr[i], transfer_coef);

    return PASS;
}

int scalePoints(points_t &points, const point_t &center, const point_t &transfer_coef)
{
    if (points.arr == nullptr)
        return ERR_NULL_PTR;

    for (size_t i = 0; i < points.count; i++)
        scalePoint(points.arr[i], center, transfer_coef);

    return PASS;
}

int rotatePoints(points_t &points, const point_t &center, const point_t &angle)
{
    if (points.arr == nullptr)
        return ERR_NULL_PTR;

    for (size_t i = 0; i < points.count; i++)
        rotatePoint(points.arr[i], center, angle);

    return PASS;
}

void freeArrPoint(points_t &points)
{
    if (points.arr != nullptr)
    {
        free(points.arr);
        points.arr = nullptr;
    }
}
