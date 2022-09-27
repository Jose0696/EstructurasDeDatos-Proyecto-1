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
    try{
    file->loadList(bst);
    }catch (FileException* e){
        cout<<e->getMessage()<<endl;
    }
    int opc;
    do {
        cout << "1- Queue all clients" << endl;
        cout << "2- Queue a client" << endl;
        cout << "3- Serve the next 5 customers" << endl;
        cout << "4- Show the next customer to be served" << endl;
        cout << "5- Simulation of customer service" << endl;
        cout << "6- Add a new customer" << endl;
        cout << "7- Exit" << endl;
        cout << "Please enter an option:";
        cin >> opc;
        switch (opc) {
            case 1:
                queueAllCustomers();
                break;
            case 2:
                queueCustomer();
                break;
            case 3:
                serveToFiveCustomers();
                break;
            case 4:
                showNextCustomer();
                break;
            case 5:
                simulationCustomersAtt();
                break;
            case 6:
                addNewCostumer();
                break;
            case 7:
                cout<<"Thank you :)"<<endl;
                break;
            default:
                cout<<"Invalidate Option..."<<endl;
                break;
        }
    }while(opc!=7);
}

void Menu::queueAllCustomers() {
    try {
        bst->enqueue(priorityQueue);
        cout<<"All customers have been saved in the queue"<<endl<<endl;
        system("pause");
    }catch (RuntimeException* e){cout<<e->getMessage()<<endl;}
}

void Menu::queueCustomer() {
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
}

void Menu::serveToFiveCustomers() {
    cout<<priorityQueue->size()<<endl;
    try{
        if(!priorityQueue->empty())
            if(priorityQueue->size() >= 5) {
                int count = 1;
                for (int i = 0; i < 5; i++) {
                    cout <<"Number: " << count << endl;
                    cout<<"Customer Information"<<endl;
                    Bank::customerInfo(priorityQueue->max());
                    system("pause");
                    cout << "---------------------\n";
                    cout<<"#####Serviced#####";
                    cout << "\n---------------------" <<endl<<endl;
                    priorityQueue->pop();
                    count ++;
                }
            }else throw new QueueException("Error: There is no 5 clients in queue");
        else throw new QueueException("Error: Empty queue");
    }catch (RuntimeException* e){
        cout<<e->getMessage()<<endl;
    }
}

void Menu::showNextCustomer() {
    try{
        cout<<"Next customer in queue: "<<endl;
        if(!priorityQueue->empty()) {
            cout<<"Customer Information"<<endl;
            Bank::customerInfo(priorityQueue->max());
            system("pause");
            cout << "---------------------\n";
            cout<<"#####Serviced#####";
            cout << "\n---------------------" <<endl<<endl;
            priorityQueue->pop();
        }
        else throw new QueueException("Error: Empty queue");
    }catch (RuntimeException* e){
        cout << e->getMessage() <<endl;
    }
}

void Menu::simulationCustomersAtt() {
    try{
        if(!priorityQueue->empty()){
            int i = 1;
            while (!priorityQueue->empty()){
                cout << "Number: " << i << endl;
                cout<<"Customer Information"<<endl;
                Bank::customerInfo(priorityQueue->max());
                system("pause");
                cout << "---------------------\n";
                cout<<"#####Serviced#####";
                cout << "\n---------------------" <<endl<<endl;
                priorityQueue->pop();
                i++;
            }
        }
        else throw new QueueException("Error: Empty queue");
    }catch (RuntimeException* e){
        cout << e->getMessage() <<endl;
    }
}

void Menu::addNewCostumer() {
    Customer* cust = Bank::addClient();
    if(cust != nullptr) {
        bst->insert(cust);
        file->save(cust->toSave());
    }
}