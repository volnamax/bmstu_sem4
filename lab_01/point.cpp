#include "point.h"

int loadPoint(FILE *f, point_t &point)
{
    if (f == nullptr)
        return ERR_NULL_PTR;

    int rc = PASS;

    if (fscanf(f, "%lf %lf %lf", &point.x, &point.y, &point.z) != 3)
        rc = ERR_READ_POINT;

    return rc;
}

void transferPoint(point_t &point, const point_t &trnsfer_coef)
{
    point.x += trnsfer_coef.x;
    point.y += trnsfer_coef.y;
    point.z += trnsfer_coef.z;
}

void transferPointOrigin(point_t &point, const point_t &center)
{
    point_t move_to_origin;
    move_to_origin.x = -center.x;
    move_to_origin.y = -center.y;
    move_to_origin.z = -center.z;
    transferPoint(point, move_to_origin);
}

void transferPointCentr(point_t &point, const point_t &center)
{
    point_t move_to_center;
    move_to_center.x = center.x;
    move_to_center.y = center.y;
    move_to_center.z = center.z;
    transferPoint(point, move_to_center);
}

void scalePoint(point_t &point, const point_t &center, const point_t &transfer_coef)
{
    point.x = transfer_coef.x * point.x + (1 - transfer_coef.x) * center.x;
    point.y = transfer_coef.y * point.y + (1 - transfer_coef.y) * center.y;
    point.z = transfer_coef.z * point.z + (1 - transfer_coef.z) * center.z;
}

double getRad(const double &angle)
{
    return angle * M_PI / 180.0;
}

void rotatePointXYZ(point_t &point, const point_t &angle) // три функции
{
    double tmp_point = point.y;

    double angle_x = getRad(angle.x);
    point.y = point.y * cos(angle_x) - point.z * sin(angle_x);
    point.z = tmp_point * sin(angle_x) + point.z * cos(angle_x);

    double angle_y = getRad(angle.y);
    tmp_point = point.x;
    point.x = point.x * cos(angle_y) + point.z * sin(angle_y);
    point.z = -tmp_point * sin(angle_y) + point.z * cos(angle_y);

    double angle_z = getRad(angle.z);
    tmp_point = point.x;
    point.x = point.x * cos(angle_z) - point.y * sin(angle_z);
    point.y = tmp_point * sin(angle_z) + point.y * cos(angle_z);
}

void rotatePoint(point_t &point, const point_t &center, const point_t &angle)
{
    transferPointOrigin(point, center);

    rotatePointXYZ(point, angle);

    transferPointCentr(point, center);
}
