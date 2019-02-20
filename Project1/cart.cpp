#include "cart.h"
#include <string>
#include <vector>
#include <iostream>



using namespace std;


//Want to define insertItem for the cart class
void GroceryCart::insertItem(Item cartItem){    //Void because no return type
    this->cartItem = cartItem;
    cartVector.push_back(cartItem); //Insert cartItem into cartVector
}

//Want to define getItemCount for the cart class
int GroceryCart::getItemCount(){    //Type int since we will be returning an int
    return cartVector.size();   //Call member function of the class vector to return size of cartVector
}

//Want to define isCartEmpty for the cart class
bool GroceryCart::isCartEmpty(){    //boolean type because the cart is either empty or not, want to return this type
    return cartVector.empty();  //Call member function of the class vector to return bool empty for cartVector
}

//Want to define deleteItem for the cart class 
void GroceryCart::deleteItem(Item cartItem){    //No return type (void) because this is a "setter" (even though it says delete, we're still setting)
    this->cartItem = cartItem;
    for(std::vector<Item>::iterator it = cartVector.begin(); it != cartVector.end(); ++it){ //Iterate from the start of cartVector til not the end of cartVector
        //So this is kind of weird, Dr. R explained this to me. Apparently the iterator type acts like a pointer, so we can call the value of the current 
        //pointer, which is of type Item, call the member function and compare to the Item passed through.
        if ((*it).getDescription() == cartItem.getDescription()){
            cout << "Item Deleted" << endl;     //Just let the user know it's deleted
            cartVector.erase(it);      //The member function of vector erase takes argument iterator, so we pass the current iterator
            it--; //This is necessary since std::vector<Item>::erase creates new iterator at the next location
        }
    }

    
}

//Want to define calcTotalCost for the cart class
double GroceryCart::calcTotalCost(){    //Return type double since we will be returning a dollar value
    int totalCost;      //We need something to store the total cost
    this->cartVector = cartVector;
    //Same thing as before, iterate through except getting the description get the price to add to our totalCost variable
    for(std::vector<Item>::iterator i = cartVector.begin(); i != cartVector.end(); ++i){
        totalCost = totalCost + (*i).getPrice(); //Add the price of the current item to the totalCost
    }
    return totalCost; //Return totalCost
}

//Need to return the private vector function of the cart class
vector<Item> GroceryCart::returnVec(){  //It is of type vector<Item> since this is what we are returning
    return cartVector; //Returns the private member
}

//Want to override the == operator for the GroceryCart class
bool operator==(GroceryCart& cart1, GroceryCart& cart2){    //Return boolean type (it's either equal or it's not)
    bool dupCarts;  //Need to define what we will be returning
    int matchedItems = 0;   //Need something to store how many items are matched
    vector<Item> cart1Vector, cart2Vector;  //I created vectors to store the 2 cart's vectors, this is so I won't have long nasty 
                                            //things like cart1.returnVec().begin()
    cart1Vector = cart1.returnVec();    //Setting the member function returnVec() equal to our variables
    cart2Vector = cart2.returnVec();
    //Oh boy, this was messy. I want to iterate through the items in both carts. So let's start with cart 1
    //Iterate through with a for loop, but then we want to compare Item A in cart1 to all items in cart2
    //So iterate through cart2 with a for loop, then we can check the description of Item A in cart to that of 
    //all the items in cart2. If there's a match, increase the matchedItems count by 1
    for(std::vector<Item>::iterator it = cart1Vector.begin(); it != cart1Vector.end(); ++it){
        for(std::vector<Item>::iterator i = cart2Vector.begin(); i != cart2Vector.end(); ++i){
            if((*i).getDescription() == (*it).getDescription()){ //If the item i in cart2 does match the item it in cart1
                matchedItems = matchedItems + 1;
            }
        }
    }
    if (((matchedItems == cart1Vector.size()) && (matchedItems == cart2Vector.size()))){    //We can't have matched carts if they're different sizes
        dupCarts = true;
    }
    else{   //If they're not the same size and matchedItems is not equal to those sizes, then we must not have duplicate carts
        dupCarts = false;
    }
    return dupCarts;    //Return the bool
}