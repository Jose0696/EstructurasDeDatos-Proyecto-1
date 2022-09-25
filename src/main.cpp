#include "Bank.h"
//#include "FileManager.h"

int main() {
/*    FileManager *fileManager;
    string archivo = "../../data_files/DatosBanco.txt";
    List<Bank> *bank = fileManager->loadList(archivo);

    cout << bank->toString();*/
    //prueba1

    //fileManager->loadList("../../data_files/DatosBanco.txt");

   //List<Bank> *list = new List<Bank>;

    Bank *bank1 = new Bank("Brett Bruce","1617071485199",1,1,1,3);
    Bank *bank2 = new Bank("Erich Wilcox","1671022582499",1,0,1,1);
    Bank *bank3 = new Bank("Steel Cooley","1662010583199",0,1,0,3);

    cout << *bank1 << "\n";
    cout << *bank2 << "\n";
    cout << *bank3 << "\n";


    return 0;
}
