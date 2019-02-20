/*
The GroceryCart should have the following public methods- 
void insertItem(Item) - Insert a grocery Item into the cart
void deleteItem(Item) - Delete a grocery Item from the cart
int getItemCount() - Return how many items are there are in the cart
bool isCartEmpty() - Returns true if cart is empty; false otherwise
double calcTotalCost() - Returns the total cost of all items in the cart
Also, overload the == operator to see if two carts are identical. Two carts are identical if all the item descriptions are identical.
*/


#include <vector>
#include "item.h"
#pragma once

using namespace std;

class GroceryCart{
    public:
        GroceryCart() : cartVector {} {};
        GroceryCart(Item cartItem) : cartVector {cartItem} {};
        void insertItem(Item cartItem);
        void deleteItem(Item cartItem);
        int getItemCount();
        bool isCartEmpty();
        double calcTotalCost();
        vector<Item> returnVec();
        friend bool operator==(GroceryCart& cart1, GroceryCart& cart2);
    private:
        vector<Item> cartVector;
        Item cartItem;
    
};
