//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_BANK_H
#define MY_PROJECT_NAME_BANK_H

#include <ostream>
#include "Person.h"

class Bank : public Person{
private:
    bool enterChild;
    bool isPregnant;
    bool isOlderAdult;
    int category;

public:
    Bank(const string &name = "", const string &id = "", bool enterChild = false, bool isPregnant = false,
         bool isOlderAdult = false, int category = 0);

    bool isEnterChild() const;

    void setEnterChild(bool enterChild);

    bool isPregnant1() const;

    void setIsPregnant(bool isPregnant);

    bool isOlderAdult1() const;

    void setIsOlderAdult(bool isOlderAdult);

    int getCategory() const;

    void setCategory(int category);

    friend ostream &operator<<(ostream &os, const Bank &bank);
};


#endif //MY_PROJECT_NAME_BANK_H
