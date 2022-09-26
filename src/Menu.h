//
// Created by Jose on 24/9/2022.
//

#ifndef MY_PROJECT_NAME_MENU_H
#define MY_PROJECT_NAME_MENU_H
#include "Bank.h"

class Menu {
private:
    FileManager<Customer>* file;
    BST<Customer>* bst;
    PriorityQueue<Customer>* priorityQueue;
public:
    Menu();
    void principalMenu();
    void queueAllCustomers();
    void queueCustomer();
    void serveToFiveCustomers();
    void showNextCustomer();
    void simulationCustomersAtt();
};


#endif //MY_PROJECT_NAME_MENU_H
