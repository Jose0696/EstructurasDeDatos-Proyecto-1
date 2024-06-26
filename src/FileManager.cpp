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
    Customer *customer;
    string line, name, id;
    bool child, pregnant, elderly;
    int category;
    myReadFile.open(myTextLine);

    if (myReadFile.fail()) {
        throw new FileException("Error: File opening failed");
    }
    try {
        while (!myReadFile.eof()) {
            getline(myReadFile, line, ',');
            name = line;
            getline(myReadFile, line, ',');
            id = line;
            getline(myReadFile, line, ',');
            line == "Yes" ? child = true : child = false;
            getline(myReadFile, line, ',');
            line == "Yes" ? pregnant = true : pregnant = false;
            getline(myReadFile, line, ',');
            line == "Yes" ? elderly = true : elderly = false;
            getline(myReadFile, line);
            category = stoi(line);
            customer = new Customer(name, id, child, pregnant, elderly, category);
            tree->insert(customer);
        }
        myReadFile.close();
    }catch(invalid_argument e){
        cout<<e.what()<<endl;
    }
}

template<class T>
void FileManager<T>::save(string info) {
    myReadFile.open(myTextLine, ios::app);
    if (myReadFile.fail()) {
        throw new FileException("Error: File saving failed");
        exit(1);
    } else
        myReadFile << endl << info;

    myReadFile.close();
}
