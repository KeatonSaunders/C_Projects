#include "MyString.h"
#include <cstring>
#include <iostream>

// No args constructor
MyString::MyString()
    : str(nullptr) {
        str = new char[1];
        *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *s)
    :str (nullptr) {
        if (s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s)+1];  // need extra character for null terminator in c-style string
            std::strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source)
    : str(nullptr) {
        str = new char[std::strlen(source.str)+1];
        std::strcpy(str, source.str);
}

// Destructor
MyString::~MyString()   {
    delete [] str;
}

// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Length getter
int MyString::get_length() const {return std::strlen(str);}

// String getter
const char *MyString::get_str() const {return str;}
