#ifndef MY_STRING_H_
#define MY_STRING_H_

class MyString  {
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
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
    
    void display() const;
    int get_length() const;
    const char *get_str() const;     //getters
};

#endif // MY_STRING_H_