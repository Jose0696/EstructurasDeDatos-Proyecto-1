#include "Bank.h"
#include "QueueList.h"
#include "FileManager.h"

int main() {
    FileManager *fileManager;
    string archivo = "../../data_files/DatosBanco.txt";
    List<Bank> *bank = fileManager->loadList(archivo);

    cout << bank->toString();
    //prueba1

    //fileManager->loadList("../../data_files/DatosBanco.txt");


    /*QueueList<Bank> *queueList = new QueueList<Bank>;
    List<Bank> *list = new List<Bank>;

    Bank *bank1 = new Bank("Brett Bruce","1617071485199","Yes","Yes","Yes",3);
    Bank *bank2 = new Bank("Erich Wilcox","1671022582499","No","Yes","Yes",1);
    Bank *bank3 = new Bank("Steel Cooley","1662010583199","Yes","Yes","Yes",3);

    list->agregarFinal(bank1);
    list->agregarFinal(bank2);
    list->agregarFinal(bank3);

    cout << list->toString();

    queueList->enqueue(bank1);
    queueList->enqueue(bank2);
    queueList->enqueue(bank3);

    cout << *queueList->front() << "\n";*/


    return 0;
}
