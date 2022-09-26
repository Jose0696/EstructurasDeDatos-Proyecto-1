//
// Created by Jose on 25/9/2022.
//

#ifndef MY_PROJECT_NAME_CUSTOMER_H
#define MY_PROJECT_NAME_CUSTOMER_H

#include "Utils.h"

class Customer {
private:
    string name;
    string id;
    bool child;
    bool pregnant;
    bool elderly;
    int category;

public:
    Customer(string name = "",string id = "",bool child = 0, bool pregnant = 0, bool elderly = 0, int category = 0);

    string getName()const;
    void setName(string name);
    string getID()const;
    void setID(string id);
    bool isChild()const;
    bool isPregnant()const;
    bool isElderly()const;
    int getCategory()const;
    void setCategory(int category);

    friend ostream &operator<<(ostream &os, const Customer &customer);
};


#endif //MY_PROJECT_NAME_CUSTOMER_H
