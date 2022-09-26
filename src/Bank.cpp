//
// Created by Jose on 11/9/2022.
//

#include "Bank.h"

void Bank::customerInfo(const Customer& bank) {
    cout << bank << endl;
}

Customer *Bank::addClient() {
    string id, chil, name, preg, eld;
    int cat, confirmation;
    bool child = false, pregnt = false, elder = false;

    cout << "Enter costumer name: ";
    cin>> name;
    cout << "Enter the id: ";
    cin >> id;
    cout << "It's a child? y/n: ";
    cin >> chil;
    cout << "Are you pregnant? y/n: ";
    cin >> preg;
    cout << "Is an elderly person?? y/n: ";
    cin >> eld;
    cout << "Category types:\n1. Premium\n2. Gold\n3. Normal\nEnter an option: ";
    cin >> cat;
    if (chil == "y" || chil == "Y")
        child = true;
    if (preg == "y" || preg == "Y")
        pregnt = true;
    if (eld == "y" || eld == "Y")
        elder = true;
    cout << "Are you sure you want to save the created client?" << endl;
    cout << "1)Yes" << endl
         << "2)No" << endl
         << "Opcion: ";
    cin >> confirmation;
    if (confirmation == 1) {
        cout << "Added customer" << endl;
        return new Customer(name, id, child, pregnt, elder, cat);
    }else{
        cout<<"Customer not added"<<endl;
        return nullptr;
    }
}