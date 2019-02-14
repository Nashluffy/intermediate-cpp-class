/*
The GroceryCart should have the following public methods- 
void insertItem(Item) - Insert a grocery Item into the cart
void deleteItem(Item) - Delete a grocery Item from the cart
int getItemCount() - Return how many items are there are in the cart
bool isCartEmpty() - Returns true if cart is empty; false otherwise
double calcTotalCost() - Returns the total cost of all items in the cart
Also, overload the == operator to see if two carts are identical. Two carts are identical if all the item descriptions are identical.
*/

#include <string>
#include <vector>
#include "item.h"


using namespace std;

class Cart{
    public:
        Cart() : vector<Item> cartVector {};
        void insertItem(item);
        void deleteItem(item);
        int getItemCount();
    private:
        vector<string> cartVector;
        Item cartItem;

}

int Cart::getItemCount(){
    return cartVector.size();
}

void Cart::insertItem(string i){
    cartVector.push_back(i);
}