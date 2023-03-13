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
            rc = loadPoints(in_file, obj.ellipse);
            if (rc != PASS)
            {
                freeObj(obj);
                obj = initObj();
            }
            rc = loadRibs(in_file, obj.ellipse_ribs); // считываем связи точек - ребра
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
    point_t point_one = {.x = obj.points.arr[0].x, .y = obj.points.arr[0].y};
    point_t point_two = {.x = obj.points.arr[1].x, .y = obj.points.arr[1].y};

    // double diameter = getDiam(obj.points.arr[0].x, obj.points.arr[1].x, obj.points.arr[0].y, obj.points.arr[1].y);
    double angle = getAngleRotateLine(obj.points.arr[0].x, obj.points.arr[1].x, obj.points.arr[0].y, obj.points.arr[1].y);
    // drawElleps(scene, obj.diam_circle, point_one, point_two, angle, LEFT_ELLEPS); // натягиваем на линию элипс

    // // draw RIGHT halh circle
    // angle = getAngleRotateLine(obj.points.arr[2].x, obj.points.arr[3].x, obj.points.arr[2].y, obj.points.arr[3].y);
    // point_one.x = obj.points.arr[2].x;
    // point_one.y = obj.points.arr[2].y;

    // point_two.x = obj.points.arr[3].x;
    // point_two.y = obj.points.arr[3].y;

    // drawElleps(scene, obj.diam_circle, point_one, point_two, angle, RIGHT_ELLEPS);

    // draw ellips top
    // angle = getAngleRotateLine(obj.points.arr[1].x, obj.points.arr[2].x, obj.points.arr[1].y, obj.points.arr[2].y);
    // point_one.x = obj.points.arr[1].x;
    // point_one.y = obj.points.arr[1].y;

    // point_two.x = obj.points.arr[2].x;
    // point_two.y = obj.points.arr[2].y;

    //drawElleps(scene);
    //  draw ellips  низ
    // angle = getAngleRotateLine(obj.points.arr[0].x, obj.points.arr[3].x, obj.points.arr[0].y, obj.points.arr[3].y);
    // point_one.x = obj.points.arr[0].x;
    // point_one.y = obj.points.arr[0].y;

    // point_two.x = obj.points.arr[3].x;
    // point_two.y = obj.points.arr[3].y;

    // drawElleps(scene, obj.diam_ellips, point_one, point_two, angle, BOT_ELLEPS);
    drawRibs(scene, obj.ellipse, obj.ellipse_ribs);

    return drawRibs(scene, obj.points, obj.ribs);
}

int transferObj(threeDobject_t &obj, const point_t transfer_coef)
{
    transferPoints(obj.ellipse, transfer_coef);

    return transferPoints(obj.points, transfer_coef);
}

int scaleObj(threeDobject_t &obj, const point_t &center, const point_t &scale_coef)
{
    scalePoints(obj.ellipse, center, scale_coef);

    return scalePoints(obj.points, center, scale_coef);
}

int rotateObj(threeDobject_t &obj, const point_t &center, const double rotate_coef)
{
    rotatePoints(obj.ellipse, center, rotate_coef);

    return rotatePoints(obj.points, center, rotate_coef);
}

int getCentrObj(threeDobject_t &obj, point_t &center)
{
    if (obj.points.arr == nullptr)
        return ERR_NULL_PTR;

    double sum_x = 0, sum_y = 0;

    for (size_t i = 0; i < obj.points.count; i++)
    {
        sum_x += obj.points.arr[i].x;
        sum_y += obj.points.arr[i].y;
    }

    center.x = sum_x / obj.points.count;
    center.y = sum_y / obj.points.count;

    return PASS;
}

int copy_Obj(threeDobject_t &obj, threeDobject_t &tmp_obj)
{
    int rc = PASS;
    tmp_obj.ribs.count = obj.ribs.count;
    rc = allocateArrRibs(tmp_obj.ribs);
    if (rc == PASS)
    {
        for (size_t i = 0; i < tmp_obj.ribs.count; i++)
            tmp_obj.ribs.arr[i] = obj.ribs.arr[i];

        tmp_obj.points.count = obj.points.count;
        rc = allocateArrPoint(tmp_obj.points);
        if (rc == PASS)
        {
            for (size_t i = 0; i < tmp_obj.points.count; i++)
            {
                tmp_obj.points.arr[i] = obj.points.arr[i];
            }
        }
    }

    return rc;
}

void freeObj(threeDobject_t &obj)
{
    freeArrPoint(obj.points);
    freeArrRibs(obj.ribs);
}
