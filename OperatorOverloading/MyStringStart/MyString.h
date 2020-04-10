#ifndef MY_STRING_H_
#define MY_STRING_H_

class MyString
{
private:
    char *str;                   // pointer to char that holds c-style string
public:
    MyString();                       // No args constructor
    MyString(const char *s);  // overloaded constructor
    MyString(const MyString &source);  //copy constructor
    ~MyString();
    void display() const;
    int get_length() const;
    const char *get_str() const;     //getters
};

#endif // MY_STRING_H_
