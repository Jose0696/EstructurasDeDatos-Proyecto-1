//
// Created by Jose on 11/9/2022.
//

#include "Person.h"

Person::Person(const string &name, const string &id) : name(name), id(id) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "name: " << person.name << " id: " << person.id;
    return os;
}
