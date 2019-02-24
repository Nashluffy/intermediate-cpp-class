/*Use of dynamic memory to implement dynamic array (like vector)*/



/* 
2/11/2019 Notes - Use of Pointers 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/

using namespace std;
#include <iostream>

class MyVector{
    private:
        int* arr; //only stores ints
        int size;
        int cap;
    public:
        MyVector() : arr{nullptr} {};
        void push(int ele);
};

int main(){
    MyVector vec;
    vec.push(1);
    vec.push(2);
    //cout << vec;
}

void MyVector::push(int ele){
    if (arr == nullptr){    //Check if array == nullptr
        cap = 2;
        arr = new int[cap];
        arr[0] = ele;
        size = 1;
    }
    else{
        if (size < cap){
            arr[size] = ele;
        }
        else{
            int* temp = arr;
            arr = new int[2*cap];
            for (int i = 0; i < cap ; i++)
                arr[i] = temp[i];
            delete[] temp;

            cap = cap*2;
            arr[size] = ele;
            size++;
        }
    }
    //If yes
        //Dynamically create array of elements
        //Insert ele into array
    //If there is no space available
        //Double size 

}