#ifndef MY_STRING_H_
#define MY_STRING_H_

class MyString
{
private:
    char *str;                   // pointer to char that holds c-style string
public:
    MyString();                                              // No args constructor
    MyString(const char *s);                        // overloaded constructor
    MyString(const MyString &source);      // copy constructor
    MyString(MyString &&source);             // move constructor
    ~MyString();
    
    MyString &operator= (const MyString &rhs);    // copy assignment
    MyString &operator= (MyString &&rhs); // move assigment
    
    MyString operator-() const;                  // make lowercase
    MyString operator+(const MyString &rhs) const;  // concatenate
    bool operator==(const MyString &rhs) const;
    
    void display() const;
    int get_length() const;
    const char *get_str() const;     //getters
};

#endif // MY_STRING_H_