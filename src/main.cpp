#include "Bank.h"
#include "QueueList.h"

int main() {
    QueueList<Bank> *queueList = new QueueList<Bank>;
    Bank *bank1 = new Bank("Brett Bruce","1617071485199","Yes","Yes","Yes",3);
    Bank *bank2 = new Bank("Erich Wilcox","1671022582499","No","Yes","Yes",1);
    Bank *bank3 = new Bank("Steel Cooley","1662010583199","Yes","Yes","Yes",3);

    queueList->enqueue(bank1);
    queueList->enqueue(bank2);
    queueList->enqueue(bank3);

    cout << *queueList->front() << "\n";
    

    return 0;
}
