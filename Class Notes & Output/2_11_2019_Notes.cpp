/* 
2/11/2019 Notes - Pointers 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/

#include <iostream>

using namespace std;

int main(){
    //Pointers are variables that hold addresses
    int x = 10; //x is of type int, and its value is 10
    int* px = &x; //px is of type address of int (pointer); & operator gets you the address
    cout << px << endl; //Prints address of x
    cout << *px << endl; //Prints what px points to which x

    //Two uses of operator *, one in declaring a pointer, and two to deference a pointer (what it points to)
    int* px1 = px;
    cout << *px1 << endl; //This will print the value 
    cout << px1 << endl; //This will print the address
    cout << endl << endl;

    *px = 20;
    cout << *px << endl; //Should print 20
    cout << *px1 << endl; //Will print 20 too!
    cout << endl << endl;

    x = 30;
    cout << *px << endl; //Should print 30 
    cout << *px1 << endl; //Will also print 30
    cout << px << endl; //Prints address

    int y = 1000;
    px = &y;
    cout << *px << endl; //*px now points to y, will print 1000
    cout << *px1 << endl; //*px1 will print 30
    cout << endl << endl; 
    *px1 = *px; //Changing the value of *px1 to *px (1000)
    cout << x << endl;




}