#include "object.h"

threeDobject_t &initObj(void)
{
    static threeDobject_t obj;
    initPoints(obj.points);
    initRibs(obj.ribs);

    return obj;
}

int loadObjFromFile(const char *&name_f, threeDobject_t &obj)
{
    if (name_f == nullptr)
        return ERR_NULL_PTR;

    FILE *in_file = fopen(name_f, "r");
    if (in_file == nullptr)
        return ERR_OPEN_FILE;

    freeObj(obj);
    int rc = PASS;
    // считываем точки
    rc = loadPoints(in_file, obj.points);
    if (rc == PASS)
    {
        rc = loadRibs(in_file, obj.ribs); // считываем связи точек - ребра
        if (rc == PASS)
        {
            rc = checkRibs(obj.ribs, obj.points.count); // проверка загруженного объекта
            if (rc != PASS)
            {
                freeObj(obj);
                obj = initObj();
            }
        }
        else
            freeArrPoint(obj.points); // если произошла ошибка при считывание ребер очищаем массив точек
    }

    fclose(in_file);
    return rc;
}

int drawObj(canvas_t &scene, const threeDobject_t &obj)
{
    // draw left halh circle
    double diameter = getDiam(obj.points.arr[0].x, obj.points.arr[1].x, obj.points.arr[0].y, obj.points.arr[1].y);
    double angle = getAngleRotateLine(obj.points.arr[0].x, obj.points.arr[1].x, obj.points.arr[0].y, obj.points.arr[1].y);
    drawCircle(scene, diameter, diameter, obj.points.arr[4].x, obj.points.arr[4].y, angle);

    // draw RIGHT halh circle
    angle = getAngleRotateLine(obj.points.arr[2].x, obj.points.arr[3].x, obj.points.arr[2].y, obj.points.arr[3].y);
    drawCircle(scene, diameter, diameter, obj.points.arr[6].x, obj.points.arr[6].y, angle);

    // draw ellips top
    angle = getAngleRotateLine(obj.points.arr[1].x, obj.points.arr[2].x, obj.points.arr[1].y, obj.points.arr[2].y);
    drawElleps(scene, obj.points.arr[1].x, obj.points.arr[2].x, obj.points.arr[1].y, obj.points.arr[2].y, angle, 1);

        // draw ellips  низ
    angle = getAngleRotateLine(obj.points.arr[0].x, obj.points.arr[3].x, obj.points.arr[0].y, obj.points.arr[3].y);
    drawElleps(scene, obj.points.arr[0].x, obj.points.arr[3].x, obj.points.arr[0].y, obj.points.arr[3].y, angle, 0);

    return drawRibs(scene, obj.points, obj.ribs);
}

int transferObj(threeDobject_t &obj, const point_t transfer_coef)
{
    return transferPoints(obj.points, transfer_coef);
}

int scaleObj(threeDobject_t &obj, const point_t &center, const point_t &scale_coef)
{
    return scalePoints(obj.points, center, scale_coef);
}

int rotateObj(threeDobject_t &obj, const point_t &center, const double rotate_coef)
{

    return rotatePoints(obj.points, center, rotate_coef);
}

int getCentrObj(threeDobject_t &obj, point_t &centr)
{
    centr.y = obj.points.arr[4].y; // начальная точка ромба
    centr.x = obj.points.arr[5].x;

    return PASS;
}
void freeObj(threeDobject_t &obj)
{
    freeArrPoint(obj.points);
    freeArrRibs(obj.ribs);
}
