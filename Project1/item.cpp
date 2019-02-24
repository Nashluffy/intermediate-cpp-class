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
#include <iostream>
using namespace std;

//Want to overload the << operator for ostream
ostream& operator<<(ostream& os, Item& tempItem){   //Has arguments of tempItem 
    os << tempItem.getDescription() << ": $" << tempItem.getPrice()<< endl;     //The overloading of the operator
    return os; 
}

//Want to define the getDescription function of Item class
string Item::getDescription(){  //Return type string, since we are returning the description
    return itemDescription;     //Return the description
}

//Want to define the getPrice function of Item class
double Item::getPrice(){    //Return type of double since getPrice is a numerical value
    return cost;    //Return the double
}

//Want o define the setDescription function of Item class
void Item::setDescription(string i){    //No return type since this is a setter
    itemDescription = i;
}
//Want to define the setCost function of Item class
void Item::setCost(double c){   //No return type since this is a setter
    cost = c;
}
