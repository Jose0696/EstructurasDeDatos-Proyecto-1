//
// Created by Jose on 12/9/2022.
//

#include "FileManager.h"

FileManager::FileManager() {
}

FileManager::~FileManager() {

}

List<Bank> FileManager::loadList(const string &filename) {
    string tempName, tempId, tempEnterChild,tempIsPregnant,tempIsOlderAdult, tempNewLine;
    int tempCategory;

    Bank *tempBank = new Bank;
    List<Bank> *tempBankList = new List<Bank>;

    string categoryS;
    std::ifstream in(filename, std::ios::in | std::ios::binary);
    if(!in.is_open()) {
        throw std::invalid_argument("Could not open file ["+ filename + "]");
    }
    if (in) {
        getline(in, tempName, ',');
        getline(in, tempId, ',');
        getline(in, tempEnterChild, ',');
        getline(in, tempIsPregnant, ',');
        getline(in, tempIsOlderAdult, ',');
        getline(in, categoryS,'\n');

        tempCategory = stoi(categoryS);
        while (!in.eof()) {
            getline(in, tempName, ',');
            getline(in, tempId, ',');
            getline(in, tempEnterChild, ',');
            getline(in, tempIsPregnant, ',');
            getline(in, tempIsOlderAdult, ',');
            getline(in, categoryS,'\n');
            tempCategory = stoi(categoryS);

            tempBank->setName(tempName);
            tempBank->setId(tempName);
            tempBank->setEnterChild(tempName);
            tempBank->setIsPregnant(tempName);
            tempBank->setIsOlderAdult(tempName);
            tempBank->setCategory(tempCategory);
            tempBankList->agregarInicio(tempBank);
        }
        in.close();
    }
/*    getline(in, tempName, '\r');
    getline(in, tempNewLine, '\n');
    while (in.good()){
        getline(in, tempName, ',');
        getline(in, tempId, ',');
        getline(in, tempEnterChild, ',');
        getline(in, tempIsPregnant, ',');
        getline(in, tempIsOlderAdult, ',');
        getline(in, categoryS,'\n');

        tempCategory = stoi(categoryS);

        tempBank->setName(tempName);
        tempBank->setId(tempName);
        tempBank->setEnterChild(tempName);
        tempBank->setIsPregnant(tempName);
        tempBank->setIsOlderAdult(tempName);
        tempBank->setCategory(tempCategory);


        tempBankList->agregarInicio(tempBank);
    }*/

    List<Bank> *temp(tempBankList);
    return *temp;
}
