#ifndef MY_STRING_H_
#define MY_STRING_H_

class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    MyString();                                                         // No-args constructor
    MyString(const char *s);                                     // Overloaded constructor
    MyString(const MyString &source);                    // Copy constructor
    MyString( MyString &&source);                         // Move constructor
    ~MyString();                                                     // Destructor
    
    MyString &operator=(const MyString &rhs); // Copy assignment
    MyString &operator=(MyString &&rhs);       // Move assignment
    
    void display() const;
    
    int get_length() const;                                       // getters
    const char *get_str() const;
};

#endif // MY_STRING_H_