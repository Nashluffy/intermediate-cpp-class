/* Use of dynamic memory to implement dynamic array (like vector) */
#include <iostream>

using namespace std;

class MyVector {
    private:
        int* arr; //only stores ints
        int size;
        int cap;
    public:
        MyVector() : arr{nullptr} {}; // Default constructor;
        ~MyVector(); // Destructor: Cleans up stuff. Here deletes arr
        void push(int ele); // inserts element into vector
        void erase(int ele); //Erase element at position ele
        friend ostream& operator <<(ostream& os, MyVector& v);};
void MyVector::erase(int ele){
            int *temp = new int[size-1]; //Let's make a new array that's the same size - 1
            //It needs to be size - 1 since we are deleting an element from the array
            copy(arr, arr+ele, temp); //Copy from the start of the array up to (but not including) the index
            copy(arr+ele+1, arr+size, temp+ele); //Copy from the index + 1 to the end of the array
            delete[] arr; //Delete[] arr
            arr = temp; //Set arr = temp;
            --size; //Set the size to  
}

int main(){
    MyVector vec;
    vec.push(1); //should store 1 in the vec
    vec.push(2); // should store 2 into the vec
    vec.push(10); // should print all elements
    vec.erase(0); // Erase element at position 0
    cout << vec << endl; // should print remaining elements
    
    }

MyVector::~MyVector(){ // Destructor
    delete[] arr;
    cout << "Destroyed vector" << endl;
}

ostream& operator <<(ostream& os, MyVector& v){
    for(int i = 0; i < v.size; i++)
        os << v.arr[i] << " ";
        return os;
}

void MyVector::push(int ele){// Check if arr == nullptr. If yes, dynamically create an array of elements.
//Insert ele into array
if (arr == nullptr) {
    cap = 2;
    arr = new int[cap];
    arr[0] = ele;
    size = 1;
}
else { // Check if there is space
    if (size < cap){
        arr[size] = ele;
        size++;
    }
    else{
        int* temp = arr;
        arr = new int[2*cap];
        for (int i = 0; i < cap; i++){
            arr[i] = temp[i];
        }
        delete[] temp;
        cap = 2*cap;
        arr[size] = ele;
        size++;
            }
        }
    }

