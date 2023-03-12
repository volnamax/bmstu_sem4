#include "point.h"

int loadPoint(FILE *f, point_t &point)
{
    if (f == nullptr)
        return ERR_NULL_PTR;

    int rc = PASS;

    if (fscanf(f, "%lf %lf", &point.x, &point.y) != 2)
        rc = ERR_READ_POINT;

    return rc;
}

void transferPoint(point_t &point, const point_t &trnsfer_coef)
{
    point.x += trnsfer_coef.x;
    point.y += trnsfer_coef.y;
}

void transferPointOrigin(point_t &point, const point_t &center)
{
    point_t move_to_origin;
    move_to_origin.x = -center.x;
    move_to_origin.y = -center.y;
    transferPoint(point, move_to_origin);
}

void transferPointCentr(point_t &point, const point_t &center)
{
    point_t move_to_center;
    move_to_center.x = center.x;
    move_to_center.y = center.y;
    transferPoint(point, move_to_center);
}

void scalePoint(point_t &point, const point_t &center, const point_t &transfer_coef)
{
    point.x = transfer_coef.x * point.x + (1 - transfer_coef.x) * center.x;
    point.y = transfer_coef.y * point.y + (1 - transfer_coef.y) * center.y;
}

double getRad(const double &angle)
{
    return angle * M_PI / 180.0;
}

void rotatePointXY(point_t &point, const double angle)
{
    double angle_x = -getRad(angle);  // xzzzzzzzzz

    double old_x = point.x;
    double old_y = point.y;

    point.x = old_x * cos(angle_x) + old_y * sin(angle_x);
    point.y = old_y * cos(angle_x) - old_x * sin(angle_x);
}

void rotatePoint(point_t &point, const point_t &center, const double angle)
{
    transferPointOrigin(point, center);

    rotatePointXY(point, angle);

    transferPointCentr(point, center);
}

double getDiam(const double x_one, const double x_two, const double y_one, const double y_two )
{
    return sqrt(pow((x_two - x_one), 2) + pow((y_one - y_two), 2));
}

double getAngleRotateLine(const double x_one, const double x_two, const double y_one, const double y_two)
{
    // Вычисляем разницу в координатах между точками.
    double dx = x_two - x_one;
    double dy = y_two - y_one;

    // Вычисляем угол между двумя точками в радианах.
    double angleRadians = std::atan2(dy, dx);

    // Преобразуем угол в градусы.
    double  angleDegrees = angleRadians * 180.0 / M_PI;

    return angleDegrees;
}
