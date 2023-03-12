#ifndef __ERRORS_H__
#define __ERRORS_H__

#define PASS 0
#define ERR_OPEN_FILE 1
#define ERR_ALLOCATE 2
#define MEMORY_ERROR 3
#define INCORRECT_COMMAND 4
#define ERR_READ_COUNT_POINTS 5
#define ERR_COUNT_POINTS 6
#define ERR_COUNT_RIBS 7
#define ERR_READ_POINT 8
#define ERR_RIBS 9
#define ERR_NULL_PTR 10
#define ERR_READ_COUNT_RIBS 11
#define ERR_READ_RIBS 12



void printErrMsg(const int &error);

#endif // __ERRORS_H__
