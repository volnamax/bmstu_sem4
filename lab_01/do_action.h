#ifndef __DO_ACTION_H__
#define __DO_ACTION_H__

#include "object.h"
#include "draw.h"
#include "errors.h"

#define INPUT_FILE "input.txt"

#define ACTION_LOAD_OBJ 1
#define ACTION_TRANSFER_OBJ 2
#define ACTION_SCALE_OBJ 3
#define ACTION_ROTATE_OBJ 4
#define ACTION_DRAW 5
#define ACTION_CLOSE_WIND 6

// структура с выбором действия и необходимыми для действия данными
struct action_t
{
    canvas_t scene;     // структура с параметрами канваса
    int action;         // переменная для хранения действия
    const char *name_f; // имя файла
    point_t center;     // x y z  центр

    union // объединение для хранения коэф перемещения масшабирования и поворота
    {
        point_t transfer; // kx ky kz  коэф для перемещения
        point_t rotate;   // ax ay az коэф для поворота углы
        point_t scale;    // dx dy dz коэф для масшабиборвания
    } coef;
};

int doAction(action_t &task);

action_t getActionLoad(void);

action_t getActionDraw(canvas_t scene);

action_t getActionTransfer(point_t transfer);

action_t getActionScale(point_t center, point_t scale);

action_t getActionRotate(point_t center, point_t angle);

action_t getActionClose(void);

#endif // __DO_ACTION_H__
