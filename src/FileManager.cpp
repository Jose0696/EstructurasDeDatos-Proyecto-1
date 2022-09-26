//
// Created by Jose on 12/9/2022.
//

#include "FileManager.h"

template <class type>
FileManager<type>::FileManager(const string &file) : myTextLine(file) {
    t = new type;
}

template <class type>
void FileManager<type>::loadList(BST<type>* tree) {
    Customer *bank;
    string line, name, id;
    bool child, pregnant, elderly;
    int category;
    myReadFile.open(myTextLine);

    if (myReadFile.fail()) {
        throw new FileException("Error: File opening failed");
        exit(1);
    }
    try {
        while (!myReadFile.eof()) {
            getline(myReadFile, line, ',');
            name = line;
            getline(myReadFile, line, ',');
            id = line;
            getline(myReadFile, line, ',');
            line == "Yes" ? child = 1 : child = 0;
            getline(myReadFile, line, ',');
            line == "Yes" ? pregnant = 1 : pregnant = 0;
            getline(myReadFile, line, ',');
            line == "Yes" ? elderly = 1 : elderly = 0;
            getline(myReadFile, line);
            category = stoi(line);
            bank = new Customer(name, id, child, pregnant, elderly, category);
            tree->insert(bank);
        }
        myReadFile.close();
    }catch(invalid_argument e){
        cout<<e.what()<<endl;
    }
}
