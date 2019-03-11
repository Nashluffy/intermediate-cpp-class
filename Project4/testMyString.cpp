/* Test for MyString class */
#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    char greeting[] = "Hello World!";
    MyString str1(greeting); // Tests constructor
    cout << str1 << endl; // Tests << operator. Should print Hello World!
    char bye[] = "Goodbye World!";
    MyString str2(bye);
    cout << str2 << endl; // Should print Goodbye World!
    MyString str3{str2}; // Tests copy constructor
    cout << str3 << endl; // Should print Goodbye World!
    str3 = str1; // Tests copy assignment operator
    cout << str3 << endl; // Should print Hello World!
    str3 = str1 + str2; // Tests + operator
    cout << str3 << endl; // Should print Hello World!Goodbye World!
    return 0;
}