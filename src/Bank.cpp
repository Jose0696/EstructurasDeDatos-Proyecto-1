//
// Created by Jose on 11/9/2022.
//

#include "Bank.h"

Bank::Bank(const string &name, const string &id, const string &enterChild, const string &isPregnant,
           const string &isOlderAdult, int category) : Person(name, id), enterChild(enterChild), isPregnant(isPregnant),
                                                       isOlderAdult(isOlderAdult), category(category) {}

const string &Bank::getEnterChild() const {
    return enterChild;
}

void Bank::setEnterChild(const string &enterChild) {
    Bank::enterChild = enterChild;
}

const string &Bank::getIsPregnant() const {
    return isPregnant;
}

void Bank::setIsPregnant(const string &isPregnant) {
    Bank::isPregnant = isPregnant;
}

const string &Bank::getIsOlderAdult() const {
    return isOlderAdult;
}

void Bank::setIsOlderAdult(const string &isOlderAdult) {
    Bank::isOlderAdult = isOlderAdult;
}

int Bank::getCategory() const {
    return category;
}

void Bank::setCategory(int category) {
    Bank::category = category;
}

ostream &operator<<(ostream &os, const Bank &bank) {
    os << static_cast<const Person &>(bank) << " enterChild: " << bank.enterChild << " isPregnant: " << bank.isPregnant
       << " isOlderAdult: " << bank.isOlderAdult << " category: " << bank.category;
    return os;
}
