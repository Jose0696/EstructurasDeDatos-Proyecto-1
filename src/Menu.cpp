//
// Created by Jose on 24/9/2022.
//

#include "Menu.h"

Menu::Menu() {
    file = new FileManager<Customer>("../../data_files/DatosBanco.txt");
    bst = new BST<Customer>;
    priorityQueue = new PriorityQueue<Customer>(100);
    principalMenu();
}

void Menu::principalMenu() {
    file->loadList(bst);
    int opc;
    do {
        cout << "1- Encolar todos los clientes" << endl;
        cout << "2- Encolar un cliente" << endl;
        cout << "3- Atender los siguientes 5 clientes" << endl;
        cout << "4- Mostrar el siguiente cliente a ser atendido" << endl;
        cout << "5- Simulacion de atencion de clientes" << endl;
        cout << "6- Agregar un cliente nuevo" << endl;
        cout << "7- Salir" << endl;
        cout << "Ingrese una opcion:";
        cin >> opc;
        switch (opc) {
            case 1:
                try {
                    bst->encolarEnCola(priorityQueue);
                    cout<<"All customers have been saved in the queue"<<endl<<endl;
                    system("pause");
                }catch (RuntimeException* e){cout<<e->getMessage()<<endl;}
                break;
            case 2:
                try {
                    if (priorityQueue->size() != priorityQueue->getCapacity()) {
                        string idClient;
                        cout<<"Enter the ID number of the client you want with queue: ";
                        cin>>idClient;
                        if(bst->search(idClient) != nullptr) {
                            priorityQueue->push(*bst->search(idClient));
                            cout<<"Customer successfully added"<<endl;
                            system("pause");
                        }
                        else{
                            throw new BankIDException("Error: Customer ID not found");
                        }
                    }
                    else throw new QueueException("Overflow: Maximum capacity reached");
                }catch (RuntimeException* e){
                    cout<<e->getMessage()<<endl;
                }

                break;
            case 3:
                cout<<priorityQueue->size()<<endl;
                try{
                    if(!priorityQueue->empty())
                        if(priorityQueue->size() >= 5) {
                            for (int i = 0; i < 5; i++) {
                                priorityQueue->max();
                                cout<<"Informacion del cliente"<<endl;
                                Bank::infoCliente(priorityQueue->max());
                                system("pause");
                                cout << "---------------------\n";
                                cout<<"#####Serviced#####";
                                cout << "\n---------------------" <<endl<<endl;
                                priorityQueue->pop();
                            }
                        }else throw new QueueException("Error: There is no 5 clients in queue");
                    else throw new QueueException("Error: Empty queue");
                }catch (RuntimeException* e){
                    cout<<e->getMessage()<<endl;
                }
                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                cout<<"Thank you"<<endl;
                break;
            default:
                cout<<"Invalidate Option..."<<endl;
                break;
        }
    }while(opc!=7);
}
