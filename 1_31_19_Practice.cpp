/* Counter class */

#include <iostream>


using std::cout;
using std::endl;

class CounterType {
// Write the declaration for the class
    public:
        void setCount(int c);
        void incCount();
        void decCount();
        int getCount();

    private:
        int count;
};

void CounterType::incCount(){
    count = count + 1;
}

void CounterType::setCount(int c){
    count = c;
}

int CounterType::getCount(){
    return count;
}

void CounterType::decCount(){
    if (count > 0) 
    {
        count = count - 1;
    }
    else
    {
        cout << "Cannot decrease count without becoming negative" << endl;
    }
    
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

// Define the class member functions as specified by the test in main() - setCount(), getCount(), incCount(), decCount().