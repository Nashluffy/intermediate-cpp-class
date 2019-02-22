/* 
2/22/2019 Notes - Copy constructors
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/

#include <iostream>
#include <vector>

class MyVector{
    private:
        int* arr; //only stores ints
        int size;
        int cap;
    public:
        ~MyVector(); //Destructor: Cleans stuff up. Here deletes arr
        MyVector() : arr{nullptr} {};
        MyVector(MyVector& inobj);
        void push(int ele);
        MyVector& operator=(MyVector& inobj)
};

int main(){
    MyVector vec;
    vec.push(1);
    vec.push(2);
    vec.push(10);
    MyVector vec1(vec); //This requires a copy 
    vec1.push(42);
    vec = vec1;

}

MyVector::operator=(MyVector& inobj){
    delete[] this->arr;
    this->arr = new int[inobj.cap];   //this-> is a special pointer that points to the current object - here vec1. 
    for (int i = 0; i < inobj.size; i++){
        arr[i] = inobj.arr[i];
    }
    this->size = inobj.size;
    this->cap = inobj.cap;
    return *this;
}

MyVector::MyVector(MyVector& inobj){    //Copy Constructor

    //This is called shadow copying. DO NOT DO THIS. This only copies the pointers.
    this->arr = new int[inobj.cap];   //this-> is a special pointer that points to the current object - here vec1. 
    for (int i = 0; i < inobj.size; i++){
        arr[i] = inobj.arr[i];
    }
    this->size = inobj.size;
    this->cap = inobj.cap;

}

MyVector::~MyVector(){  //Destructor
    delete[] arr;
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
}