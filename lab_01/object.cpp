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

    freeObj(obj); // так делать нельзя, сделать тмп обж
    int rc = PASS;
    // считываем точки
    rc = loadPoints(in_file, obj.points); // сделать функцию котороая принимает тмп и там уже считывает и точки и ребра
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
    return drawRibs(scene, obj.points, obj.ribs);
}

int getCentrObj(const threeDobject_t & obj, point_t &centr_obj)
{
    return getCentrPoints(obj.points, centr_obj);
}

int transferObj(threeDobject_t &obj, const point_t transfer_coef)
{
    return transferPoints(obj.points, transfer_coef);
}

int scaleObj(threeDobject_t &obj, const point_t &center, const point_t &scale_coef)
{
    return scalePoints(obj.points, center, scale_coef);
}

int rotateObj(threeDobject_t &obj, const point_t &center, const point_t rotate_coef)
{
    return rotatePoints(obj.points, center, rotate_coef);
}

void freeObj(threeDobject_t &obj)
{
    freeArrPoint(obj.points);
    freeArrRibs(obj.ribs);
}
