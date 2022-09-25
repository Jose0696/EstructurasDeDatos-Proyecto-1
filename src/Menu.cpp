//
// Created by Jose on 24/9/2022.
//

#include "Menu.h"

Menu::Menu() {
    bank = new Bank;
}

void Menu::principalMenu() {
    int option;
    cout << "1- Encolar todos los clientes\n";
    cout << "2- Encolar un cliente\n";
    cout << "3- Atender los siguientes 5 clientes\n";
    cout << "4- Mostrar el next cliente a ser atendido\n";
    cout << "5- Simulación de Atención de Clientes\n";
    cout << "6- Agregar un Cliente Nuevo\n";
    cout << "7- Salir: ";
    cin >> option;

    switch (option) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            break;
    }
    

}

Menu::~Menu() {

}
