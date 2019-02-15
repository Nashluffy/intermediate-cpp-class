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
        friend bool operator==(GroceryCart& cart1, GroceryCart& cart2){
            bool dupCarts;
            int matchedItems = 0;
            vector<Item> cart1Vector, cart2Vector;
            cart1Vector = cart1.returnVec();
            cart2Vector = cart2.returnVec();
            for(std::vector<Item>::iterator it = cart1Vector.begin(); it != cart1Vector.end(); ++it){
                for(std::vector<Item>::iterator i = cart2Vector.begin(); i != cart2Vector.end(); ++i){
                    if((*i).getDescription() == (*it).getDescription()){ //If the item i in cart2 doesn't match the item it in cart1
                        matchedItems = matchedItems + 1;
                    }
                }
            }
            if (((matchedItems == cart1Vector.size()) && (matchedItems == cart2Vector.size()))){
                dupCarts = true;
            }
            else{
                dupCarts = false;
            }
            return dupCarts;
            
        }
    private:
        vector<Item> cartVector;
        Item cartItem;
    
};
