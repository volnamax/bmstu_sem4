#include <QMessageBox>

#include "errors.h"

void printErrMsg(const int &err_code)
{
    QMessageBox message_box;
    if (err_code == ERR_OPEN_FILE)
        message_box.critical(0, "Ошибка", "Не удалось отрыть файл");
    else if (err_code == ERR_ALLOCATE)
        message_box.critical(0, "Ошибка", "Не Получается выделить память.");
    else if (err_code == ERR_NULL_PTR)
        message_box.critical(0, "Ошибка", "Недопустимый указатель");
    else if (err_code == INCORRECT_COMMAND)
        message_box.critical(0, "Ошибка", "Некорректная команда");
    else if (err_code == ERR_READ_COUNT_POINTS)
        message_box.critical(0, "Ошибка", "Чтения количества точек");
    else if (err_code == ERR_COUNT_POINTS)
        message_box.critical(0, "Ошибка", "Некорректное число количества точек");
    else if (err_code == ERR_COUNT_RIBS)
        message_box.critical(0, "Ошибка", "Некорректное число количества ребер");
    else if (err_code == ERR_READ_POINT)
        message_box.critical(0, "Ошибка", "Чтения точки");
    else if (err_code == ERR_RIBS)
        message_box.critical(0, "Ошибка", "Чтения ребер");
    else
        message_box.critical(0, "Ошибка", "Неизвестная ошибка");

    message_box.setFixedSize(600, 300);
}
