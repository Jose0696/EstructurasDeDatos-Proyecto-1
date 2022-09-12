//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_BANK_H
#define MY_PROJECT_NAME_BANK_H

#include <ostream>
#include "Person.h"

class Bank :public Person{
private:
    string enterChild;
    string isPregnant;
    string isOlderAdult;
    int category;

public:
    Bank(const string &name = "", const string &id = "", const string &enterChild = "", const string &isPregnant = "",
         const string &isOlderAdult = "", int category = 0);

    const string &getEnterChild() const;

    void setEnterChild(const string &enterChild);

    const string &getIsPregnant() const;

    void setIsPregnant(const string &isPregnant);

    const string &getIsOlderAdult() const;

    void setIsOlderAdult(const string &isOlderAdult);

    int getCategory() const;

    void setCategory(int category);

    friend ostream &operator<<(ostream &os, const Bank &bank);
};


#endif //MY_PROJECT_NAME_BANK_H
