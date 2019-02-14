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

bool GroceryCart::isCartEmpty(){
    return cartVector.empty();
}

void GroceryCart::deleteItem(Item cartItem){
    this->cartItem = cartItem;
    //cartVector(cartItem).erase();
    for(std::vector<Item>::iterator it = cartVector.begin(); it != cartVector.end(); ++it){
        if ((*it).getDescription() == cartItem.getDescription()){
            cout << "Item Deleted" << endl;
            cartVector.erase(it);
            it--; //This is necessary since std::vector<Item>::erase creates new iterator at the next location
        }
    }

    
}

double GroceryCart::calcTotalCost(){
    int totalCost;
    this->cartVector = cartVector;
    for(std::vector<Item>::iterator i = cartVector.begin(); i != cartVector.end(); ++i){
        totalCost = totalCost + (*i).getPrice();
    }
    return totalCost;
}

vector<Item> GroceryCart::returnVec(){
    return cartVector;
}

