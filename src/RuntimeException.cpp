//
// Created by Jose on 25/9/2022.
//

#include "RuntimeException.h"

RuntimeException::RuntimeException(const string& e): msg(e) {}

string RuntimeException::getMessage() const {
    return msg;}

QueueException::QueueException(const string &e) : RuntimeException(e) {}

FileException::FileException(const string &e) : RuntimeException(e) {}

BankIDException::BankIDException(const string &e) : RuntimeException(e) {

}