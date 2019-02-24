/*

To compile, g++ -std=c++11 file_name.cpp -o output_file

Define a class for a type called CounterType. 
An object of this type is used to count things, so it records a count that is a non-negative whole number. 
Include a mutator function (setCount()) that sets the counter to a count given as an argument. 
Include member functions to increase the count by one (inCount()) and to decrease the count by one (decCount()). 
Be sure that no member function allows the counter to become negative. 
Also, include a member function that returns the current count value (getCount()).
*/


//Counter class

#include <iostream>


using namespace std;

class CounterType {
    public:
        CounterType () : counter{} {}; //Constructor with no arguments
        void incCount(); //Declares the increase count member function
        void decCount(); //Declares the decrease count member function
        void setCount(int c); //Declares mutator member function setCount 
        int getCount(); //Declares getCount member function
    private:
        int counter; //Private counter of type int
};

void CounterType::incCount(){
    counter = counter + 1; //Increase the private counter by 1
}

void CounterType::decCount(){
    if (counter > 0){   //If the counter is greater than 0
        counter = counter - 1;  //Decrease the counter by 1
    }
    else{
        cout << "Invalid Operation" << endl; //Otherwise, print invalid operation and DO NOT decrease count
    }
}

int CounterType::getCount(){
    return counter; //Return the value of counter
}

void CounterType::setCount(int c){
    counter = c; //Set counter to value of the argument passed
}


int main()
{
CounterType ctr;
ctr.setCount(1); // Set count to 1
cout << ctr.getCount() << endl; // Outputs count
ctr.incCount(); // Increments count
cout << ctr.getCount() << endl; // Verify increment worked correctly
ctr.decCount(); // Decrement count
ctr.decCount(); // Decrement count
cout << ctr.getCount() << endl; // Verify decrement worked correctly
ctr.decCount(); // Decrement count // Should print Invalid Operation
return 0;

}