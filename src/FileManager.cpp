//
// Created by Jose on 12/9/2022.
//

#include "FileManager.h"

FileManager::FileManager() {
}

FileManager::~FileManager() {

}

List<Bank> *FileManager::loadList(const string &filename) {
    List<Bank> *bankList = new List<Bank>;
    string myTextLine;
    ifstream myReadFile(filename);

    if (!myReadFile.is_open()) {
        throw invalid_argument("Could not open the file [" + filename + "]");
    }
    int rowCont = 1;
    while (getline(myReadFile, myTextLine)) {
        if (rowCont > 0) {
            Bank *bank = new Bank;
            stringstream ss(myTextLine);
            int colCont = 0;
            while (ss.good()){
                string substr;
                int integer = 0;
                getline(ss, substr, ',');
                if(colCont == 0) bank->setName(substr);
                if(colCont == 1) bank->setId(substr);
                if(colCont == 2) bank->setEnterChild(substr);
                if(colCont == 3) bank->setIsPregnant(substr);
                if(colCont == 4) bank->setIsOlderAdult(substr);
                if(colCont == 5) bank->setCategory(stoi(substr, reinterpret_cast<size_t *>(integer)));
                colCont ++;
            }
            bankList->agregarFinal(bank);
        }
        rowCont ++;
    }

    myReadFile.close();

    return bankList;
}
