//
// Created by Jose on 11/9/2022.
//

#include "Bank.h"

Bank::Bank(const string &name, const string &id, bool enterChild, bool isPregnant,
           bool isOlderAdult, int category) : Person(name, id), enterChild(enterChild), isPregnant(isPregnant),
                                                       isOlderAdult(isOlderAdult), category(category) {}

bool Bank::isEnterChild() const {
    return enterChild;
}

void Bank::setEnterChild(bool enterChild) {
    Bank::enterChild = enterChild;
}

bool Bank::isPregnant1() const {
    return isPregnant;
}

void Bank::setIsPregnant(bool isPregnant) {
    Bank::isPregnant = isPregnant;
}

bool Bank::isOlderAdult1() const {
    return isOlderAdult;
}

void Bank::setIsOlderAdult(bool isOlderAdult) {
    Bank::isOlderAdult = isOlderAdult;
}

int Bank::getCategory() const {
    return category;
}

void Bank::setCategory(int category) {
    Bank::category = category;
}

ostream &operator<<(ostream &os, const Bank &bank) {
    os << static_cast<const Person &>(bank) << " enterChild: ";
    if(bank.enterChild){
        os << "Yes";
    }else{
        os << "No";
    }
    os << " isPregnant: ";

    if(bank.isPregnant){
        os << "Yes";
    }else{
        os << "No";
    }
       os << " isOlderAdult: ";
    if(bank.isOlderAdult) {
        os << "Yes";
    }else{
        os << "No";
    }
    os << " category: " << bank.category;
    return os;
}
