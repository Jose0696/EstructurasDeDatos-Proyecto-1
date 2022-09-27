//
// Created by Jose on 25/9/2022.
//

#include "Customer.h"

Customer::Customer(string name, string id, bool child, bool pregnant, bool elderly, int category): name(name),
                                                                                               id(id), child(child), pregnant(pregnant), elderly(elderly), category(category){}

string Customer::getName()const{
    return name;

}
void Customer::setName(string name){
    Customer::name=name;
}

string Customer::getID()const{
    return id;
}

void Customer::setID(string id){
    Customer::id=id;
}

bool Customer::isChild()const{
    return child;
}

bool Customer::isPregnant()const{
    return pregnant;
}

bool Customer::isElderly()const{
    return elderly;
}

int Customer::getCategory()const{
    return category;
}

void Customer::setCategory(int category){
    category=category;
}

ostream &operator<<(ostream &os, const Customer &customer) {
    os << "Name: " << customer.name << "\nId: " << customer.id;
    os << "\nChild: ";  customer.child? os<< "Yes": os<< "No";
    os << "\nIs Pregnant: "; customer.pregnant? os<< "Yes": os<< "No";
    os << "\nIs Elderly: "; customer.elderly? os<< "Yes": os<< "No";
    os << "\nCategory: ";
    if(customer.category == 1){
      os << "Premium";
    }else if(customer.category == 2){
        os << "Gold";
    }else{
        os << "Normal";
    }
    return os;
}

string Customer::toSave() {
    stringstream s;
    s<<name+","+id+",";child?s<<"Yes,":s<<"No,"; pregnant?s<<"Yes,":s<<"No,"; elderly?s<<"Yes,":s<<"No,"; s<<category;
    return s.str();
}

int Customer::influencePercent(){
    int porcentaje=0;
    child?porcentaje+=20:porcentaje+=0;
    pregnant?porcentaje+=25:porcentaje+=0;
    elderly?porcentaje+=35:porcentaje+=0;
    if(category==1) porcentaje+=20;
    else if(category==2) porcentaje+=10;
    return porcentaje;
}

bool Customer::operator<(Customer c) {
    return influencePercent() < c.influencePercent();
}