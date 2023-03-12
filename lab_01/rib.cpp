#include "ribs.h"


int LoadRib(FILE *in_file, rib_t &rib)
{
    if(in_file == nullptr)
        return ERR_NULL_PTR;
        
    int rc = PASS;

    if (fscanf(in_file, "%zu %zu", &rib.first_point, &rib.second_point) != 2)
        rc = ERR_READ_RIBS;
    else if (rib.first_point > SIZE_MAX || rib.second_point > SIZE_MAX)
        rc = ERR_RIBS;

    return rc;
}

void drawrib(const canvas_t &scene, const rib_t &linkage, const points_t &points)
{
    point_t first_point = points.arr[linkage.first_point];
    point_t second_point = points.arr[linkage.second_point];
    drawline(scene, first_point, second_point);
}

