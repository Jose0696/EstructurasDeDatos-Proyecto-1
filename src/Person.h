//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H

#include <ostream>
#include "Utils.h"

class Person {
private:
    string name;
    string id;

public:
    Person(const string &name = "", const string &id ="");

    const string &getName() const;
    void setName(const string &name);
    const string &getId() const;
    void setId(const string &id);

    friend ostream &operator<<(ostream &os, const Person &person);
};


#endif //MY_PROJECT_NAME_PERSON_H
