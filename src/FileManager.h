//
// Created by Jose on 12/9/2022.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include "Utils.h"
#include "BST.cpp"
#include "RuntimeException.h"

template <class type>
class FileManager {
public:
private:
    type *t;
    string myTextLine;
    fstream myReadFile;
public:
    FileManager(const string &file);
    void loadList(BST<type>* tree);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
