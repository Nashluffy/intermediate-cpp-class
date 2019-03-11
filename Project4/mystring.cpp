#include "mystring.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

MyString::MyString(const char* s) { //Constructor given char
    len = strlen(s); //strlen from string.h
    str = new char[len + 1]; //Dynamically allocate new memory for our str
    strcpy(str, s); //strcpy input to newly allocated memory
}

MyString::MyString() { //Default constructor
    str = nullptr; 
    len = 0;
}


MyString::MyString(MyString& s) { //Copy constructor
    this->len = strlen(s.str); //Store len 
    this->str = new char[len + 1]; //Allocate new memory for new str
    strcpy(this->str,s.str); // strcpy to get desired value of str
}


MyString::~MyString(){ //Destructor
    delete[] str; 
}

ostream& operator<<(ostream& os, MyString& s){ //Operator overloading for <<
    os << s.str; //output the char to os
    return os; 
}



MyString& MyString::operator=(MyString& s){ //Operator overloading for =
    delete[] this->str; //Clear out the str
    this->str = new char[s.len + 1]; //Allocate new memory for len + 1
    strcpy(this->str, s.str); //copy desired str 
    return *this; //Return the value of pointer, could also do this->str (or should be able to)
}

//Let me preface by saying I'm really tired, and the code below is really sloppy
//I'm sure there are better ways to implement the following
MyString& MyString::operator+(MyString& s){ //Operator overloading for + 
    MyString temp; //Create temporary MyString object 
    temp.str = new char[s.len + this->len + 1]; //Allocate new memory for the length of rhs and lhs +1 
    strcpy(temp.str, s.str); //Copy the first string in
    strcat(temp.str, this->str); //Concat the second string in
    delete[] this->str; //Delete the old string
    str = new char[temp.len]; //Allocate memory equivalent to the temp length
    strcpy(this->str, temp.str); //Copy over the string
    delete[] temp.str; //Delete the temp
    return *this;
    
}


/* OUTPUT SHOULD BE THE FOLLOWING */
/*
Hello World!
Goodbye World!
Goodbye World!
Hello World!
HellowWorld!Goodbye World!
*/