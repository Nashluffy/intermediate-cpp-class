Define a class for a type called CounterType. An object of this type is used to count things, so it records a count that is a non-negative whole number. Include a mutator function (setCount()) that sets the counter to a count given as an argument. Include member functions to increase the count by one (inCount()) and to decrease the count by one (decCount()). Be sure that no member function allows the counter to become negative. Also, include a member function that returns the current count value (getCount()).

/* Counter class */

#include <iostream>


using std::cout;
using std::endl;

class CounterType {
// Write the declaration for the class

};

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

