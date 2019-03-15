/* 
2/11/2019 Notes - Use of Pointers 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/


/*
Two types of memory - stack and heap (also called free store)
Stack is where all your variables live, and is destroyed when the function exits
If you would like to have your variables outlive a function, allocate on the heap
Allocation done by using new keyword
Once you are done using it, deallocate using free key word
*/

#include <iostream>

using namespace std;

/*void f()
{
    int x = 10; //x is allocated in the stack, and is destroyed when the function
    return 0;
}
*/

int* createArray(int size){
    int* arr = new int[size]; //new returns a pointer to the array
    for (int i = 0; i < size; i++){
        arr[i] = i;
    }
    return arr;
}

int main(){
    int *p = createArray(5);
    for (int i = 0; i < 5; i++){
        cout << p[i];
    }
    delete[] p;

    cout << endl;

    p = createArray(10);
    for (int i = 0; i < 10; i++)
        cout << *(p+i);
    delete[] p;

    cout << endl;
    //So the idea is, *(p+i) is the same as p[i]
    //Array name is really just the address of the array

    p = nullptr; //This removes the address p was holding

    //Segmentation fault means illegal memory access

    return 0;
}