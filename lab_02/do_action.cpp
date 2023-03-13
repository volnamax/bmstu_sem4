#include "do_action.h"

int doAction(action_t &act)
{
    int rc = PASS;
    static threeDobject_t obj = initObj();
    static threeDobject_t tmp_obj = initObj();
    

    if (act.action == ACTION_LOAD_OBJ)
    {
        copy_Obj(obj, tmp_obj);
        rc = loadObjFromFile(act.name_f, obj);
    }
    else if (act.action == ACTION_DRAW)
        rc = drawObj(act.scene, obj);

    else if (act.action == ACTION_TRANSFER_OBJ)
    {
        copy_Obj(obj, tmp_obj);
        rc = transferObj(obj, act.coef.transfer);
    }
    else if (act.action == ACTION_SCALE_OBJ)
    {
        copy_Obj(obj, tmp_obj);
        rc = scaleObj(obj, act.center, act.coef.scale);
    }
    else if (act.action == ACTION_ROTATE_OBJ)
    {
        copy_Obj(obj, tmp_obj);
        rc = rotateObj(obj, act.center, act.angle);
    }
    else if (act.action == ACTION_UPDATE_CENTR_OBJ)
        rc = getCentrObj(obj, act.obj_centr);
    else if (act.action == ACTION_STEP_BACK)
    {
        rc = drawObj(act.scene, tmp_obj);
        copy_Obj(tmp_obj, obj);
    }

    else if (act.action == ACTION_CLOSE_WIND)
    {
        freeObj(obj);
        freeObj(tmp_obj);
    }
    else
        rc = INCORRECT_COMMAND;

    return rc;
}

action_t getActionUpdateCentrObj(void)
{
    action_t action;
    action.action = ACTION_UPDATE_CENTR_OBJ;
    return action;
}

action_t getActionLoad(void)
{
    action_t action;
    action.action = ACTION_LOAD_OBJ;
    action.name_f = INPUT_FILE;
    return action;
}

action_t getActionDraw(canvas_t scene)
{
    clearAll(scene); // очищаем полотно
    action_t action;
    action.action = ACTION_DRAW;
    action.scene = scene;
    return action;
}

action_t getActionTransfer(point_t transfer)
{
    action_t action;
    action.action = ACTION_TRANSFER_OBJ;
    action.coef.transfer = transfer;
    return action;
}

action_t getActionScale(point_t center, point_t scale)
{
    action_t action;
    action.action = ACTION_SCALE_OBJ;
    action.center = center;
    action.coef.scale = scale;
    return action;
}

action_t getActionClose(void)
{
    action_t action;
    action.action = ACTION_CLOSE_WIND;
    return action;
}

action_t getActionRotate(point_t center, double angle)
{
    action_t action;
    action.action = ACTION_ROTATE_OBJ;
    action.center = center;
    action.angle = angle;
    return action;
}
