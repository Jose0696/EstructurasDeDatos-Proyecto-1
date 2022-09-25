//
// Created by Jose on 24/9/2022.
//

#ifndef MY_PROJECT_NAME_MENU_H
#define MY_PROJECT_NAME_MENU_H
#include "Bank.h"
#include "QueueList.h"

class Menu {
private:
    Bank *bank = new Bank;
    QueueList<Bank> *queueList = new QueueList<Bank>;

public:
    Menu();
    void principalMenu();
    ~Menu();
};


#endif //MY_PROJECT_NAME_MENU_H
