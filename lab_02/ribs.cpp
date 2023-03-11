#include "ribs.h"

void initRibs(ribs_t &ribs)
{
    ribs.arr = nullptr;
    ribs.count = 0;
}

int loadCountRibs(FILE *in_file, ribs_t &ribs)
{
    if (in_file == nullptr)
        return ERR_NULL_PTR;

    int rc = PASS;

    if (fscanf(in_file, "%zu", &ribs.count) != 1)
        rc = ERR_READ_COUNT_RIBS;
    else if (ribs.count <= 0 || ribs.count > SIZE_MAX)
        rc = ERR_COUNT_RIBS;

    return rc;
}

int allocateArrRibs(ribs_t &ribs)
{
    int rc = PASS;

    ribs.arr = (rib_t *)malloc(ribs.count * sizeof(rib_t));
    if (ribs.arr == nullptr)
        rc = ERR_ALLOCATE;

    return rc;
}

int loadArrRibs(FILE *in_file, ribs_t &ribs)
{
    if (in_file == nullptr || ribs.arr == nullptr)
        return ERR_NULL_PTR;
    int rc = PASS;

    for (size_t i = 0; i < ribs.count && rc == PASS; i++)
        LoadRib(in_file, ribs.arr[i]);

    return rc;
}

int loadRibs(FILE *in_file, ribs_t &ribs)
{
    if (ribs.arr != nullptr || in_file == nullptr)
        return ERR_NULL_PTR;

    int rc = loadCountRibs(in_file, ribs);
    if (rc == PASS)
    {
        rc = allocateArrRibs(ribs);
        if (rc == PASS)
        {
            rc = loadArrRibs(in_file, ribs);
            if (rc != PASS)
                freeArrRibs(ribs);
        }
    }

    return rc;
}

int checkRibs(ribs_t &ribs, size_t &points_count)
{
    int rc = PASS;
    if (ribs.arr == nullptr)
        return ERR_NULL_PTR;

    for (size_t i = 0; i < ribs.count && rc == PASS; i++)
        if (ribs.arr[i].first_point >= points_count || ribs.arr[i].second_point >= points_count)
            rc = ERR_RIBS;
    return rc;
}

int drawRibs(canvas_t &scene, const points_t &points, const ribs_t &ribs)
{
    if (ribs.arr == nullptr || points.arr == nullptr)
        return ERR_NULL_PTR;

    for (size_t i = 0; i < ribs.count; i++)
        drawrib(scene, ribs.arr[i], points);

    return PASS;
}

void freeArrRibs(ribs_t &ribs)
{
    if (ribs.arr != nullptr)
    {
        free(ribs.arr);
        ribs.arr = nullptr;
    }
}
