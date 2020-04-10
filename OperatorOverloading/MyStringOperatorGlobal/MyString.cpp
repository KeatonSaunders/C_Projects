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

// Move constructor 
MyString::MyString(MyString &&source)
    : str(source.str) {
        source.str = nullptr;
        std::cout << "Move constructor used" << std::endl;
}

// Destructor
MyString::~MyString()   {
    delete [] str;
}

// Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assignment 
MyString &MyString::operator= (MyString &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// Length getter
int MyString::get_length() const {return std::strlen(str);}

// String getter
const char *MyString::get_str() const {return str;}

// Equality
bool operator==(const MyString &lhs, const MyString &rhs) {
    return (std::strcmp(lhs.str, rhs.str)==0);
}

//Make lowercase
MyString operator-(const MyString &obj) {
    char *buff = new char [std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    for (size_t i=0; i<strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    MyString temp {buff};
    delete [] buff;
    return temp;
}

// Concatenation
MyString operator+(const MyString &lhs, const MyString &rhs) {
    char *buff = new char [std::strlen(lhs.str) + std::strlen(rhs.str) +1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    MyString temp {buff};
    delete [] buff;
    return temp;
}