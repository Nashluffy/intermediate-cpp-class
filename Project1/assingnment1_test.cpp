/* Coding assignment 1
You were recently hired by GroceriesRUs company. They want you to develop code to move their grocery operations online.
As a part of this effort, you are required to develop a GroceryCart class that can hold groceryitems (Item class). 
The Item class has the following data members item description (string), cost (double).
The Items class should have mutators (setters) and accessors (getters).
Also overload the << oprator for the Item class

The GroceryCart should have the following public methods- 
void insertItem(Item) - Insert a grocery Item into the cart
void deleteItem(Item) - Delete a grocery Item from the cart
int getItemCount() - Return how many items are there are in the cart
bool isCartEmpty() - Returns true if cart is empty; false otherwise
double calcTotalCost() - Returns the total cost of all items in the cart
Also, overload the == operator to see if two carts are identical. Two carts are identical if all the item descriptions are identical.

Hint: Use a vector container in the GroceryCart to hold the items. 

Your code should pass the test in main() for full credit. The code should be organized as the following files
item.h, item.cpp, cart.h, cart.cpp, assignment1_test.cpp (which has the main() test function)

Please upload your code on Canvas a zip file.

Note: No collaborations allowed. All code written must be strictly your own.
Please meet TA or Professor if you have questions.
*/

#include <iostream>
#include <string>
#include <vector>

#include "item.h" 
#include "cart.h" 

using namespace std;

int main()
{

    Item it1{"Salad", 5.50}, it2{"Milk", 2.50}, it3{"Bread", 1.75}, it4; //Tests the Item constructors
    
    GroceryCart cart1; // Test GroceryCart constructor

    cart1.insertItem(it1);
    
    cart1.insertItem(it2);
    cart1.insertItem(it3);

    if (!cart1.isCartEmpty()) { // Test isCartEmpty() method
        cout << "Number of items in cart1 " << cart1.getItemCount() << endl; // Tests getItemCount() method
        cout << "Total cost of items in cart1 $" << cart1.calcTotalCost() << endl; // Tests calcTotalCost() method
    }
    
    //To test the delete function
    cart1.deleteItem(it1);
    cart1.deleteItem(it3);
    cart1.deleteItem(it2);
    cout << "Number of items in cart1 " << cart1.getItemCount() << endl; 


    GroceryCart cart2;
    cart2.insertItem(it1);
    it4.setDescription("Coffee"); // Tests setDescription() method
    it4.setCost(7.5); //Test setCost method
    
    cout << it4; //Should print Coffee:$7.5. Tests << operator
    cart2.insertItem(it4);
    
    //To test the items inserted in cart2
    cout << cart2.getItemCount() << endl;
    
    // To check the == operator overloading
    GroceryCart cart3;
    cart3.insertItem(it1);
    cart3.insertItem(it2);

    GroceryCart cart4;
    cart4.insertItem(it1);
    cart4.insertItem(it2);

    if (cart3 == cart4) //Tests == operator
        cout << "Possibly duplicate carts" << endl;

    return 0;
        
}
