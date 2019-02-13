/*
Getters:
    getDescription
    getPrice
Setters:
    setDescription
    setPrice
*/
#include <string>
#include "item.h"
using namespace std;

string Item::getDescription(){
    return itemDescription;
}

double Item::getPrice(){
    return cost;
}

void Item::setDescription(string i){
    itemDescription = i;
}

void Item::setPrice(double c){
    cost = c;
}
