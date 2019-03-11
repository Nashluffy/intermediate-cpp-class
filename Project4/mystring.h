/* MyString class */
#ifndef MyString_H
#define MyString_H
#include <iostream>
using namespace std;

class MyString {
    private:
        char* str;
        int len;
    public:
        MyString();
        MyString(const char* s);
        MyString(MyString& s);
        ~MyString();
    friend ostream& operator <<(ostream& os, MyString& s); // Prints string
    MyString& operator=(MyString& s); //Copy assignment
    MyString& operator+(MyString& s); // Creates a new string by concantenating input string
};

#endif