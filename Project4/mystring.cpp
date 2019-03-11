#include "mystring.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

MyString::MyString(const char* s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

MyString::MyString() {
    str = nullptr;
    len = 0;
}


MyString::MyString(MyString& s) {
    this->len = strlen(s.str);
    this->str = new char[len + 1];
    strcpy(this->str,s.str);
}


MyString::~MyString(){
    delete[] str;
}

ostream& operator<<(ostream& os, MyString& s){
    os << s.str << endl;
    return os;
}



MyString& MyString::operator=(MyString& s){
    delete[] this->str;
    this->str = new char[s.len + 1];
    strcpy(this->str, s.str);
    return *this;
}

MyString& MyString::operator+(MyString& s){ //I know this is really messy, I'm tired
    MyString temp;
    temp.str = new char[s.len + this->len + 1];
    strcpy(temp.str, s.str);
    strcat(temp.str, this->str);
    delete[] this->str;
    str = new char[temp.len];
    strcpy(this->str, temp.str);
    delete[] temp.str;
    return *this;
}
