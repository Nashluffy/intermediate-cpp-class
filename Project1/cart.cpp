#include "cart.h"
#include <string>
#include <vector>
#include <iostream>



using namespace std;

void GroceryCart::insertItem(Item cartItem){
    this->cartItem = cartItem;
    cartVector.push_back(cartItem);
}

int GroceryCart::getItemCount(){
    return cartVector.size();
}

bool GroceryCart::isCartEmpty(Item cartItem){
    return cartVector.empty();
}

void GroceryCart::deleteItem(Item cartItem){
    this->cartItem = cartItem;
    //cartVector(cartItem).erase();
    for(std::vector<Item>::iterator it = cartVector.begin(); it != cartVector.end(); ++it){
        if ((*it).getDescription() == cartItem.getDescription()){
            cout << "Item found!" << endl;
        }
    }
    
}

//int GroceryCart::calcTotalCost(vector<Item> cartVector){
 //   for(std::vector<Item>::iterator i = cartVector.begin(); iterator != cartVector.end(); ++i){
//
//    }
//}