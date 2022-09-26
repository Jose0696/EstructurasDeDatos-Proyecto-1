//
// Created by Jose on 25/9/2022.
//

#ifndef MY_PROJECT_NAME_RUNTIMEEXCEPTION_H
#define MY_PROJECT_NAME_RUNTIMEEXCEPTION_H
#include "Utils.h"

class RuntimeException {
private:
    string msg;
public:
    RuntimeException(const string& e);

    string getMessage()const;
};

class QueueException:public RuntimeException{
public:
    QueueException(const string& e);
};

class FileException:public RuntimeException{
public:
    FileException(const string& e);
};

class BankIDException: public RuntimeException{
public:
    BankIDException(const string& e);
};

#endif //MY_PROJECT_NAME_RUNTIMEEXCEPTION_H
