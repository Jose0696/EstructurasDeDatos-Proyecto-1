//
// Created by Jose on 24/9/2022.
//

#ifndef MY_PROJECT_NAME_MENU_H
#define MY_PROJECT_NAME_MENU_H
#include "Bank.h"

class Menu {
private:
    Bank *bank = new Bank;

public:
    Menu();
    void principalMenu();
    ~Menu();
};


#endif //MY_PROJECT_NAME_MENU_H
