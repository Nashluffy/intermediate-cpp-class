/*
Getters:
    getDescription
    getPrice
Setters:
    setDescription
    setPrice
*/
#include <string>
#include <iostream>
#pragma once

using namespace std;

class Item{
    public:
        void setDescription(string i);
        void setCost(double c);
        string getDescription();
        double getPrice();
        Item() : itemDescription{} , cost{} {};
        Item(string i, double c) : itemDescription{i} , cost {c} {};
        Item(string i) : itemDescription{i}, cost{} {};
        Item(double c) : itemDescription{}, cost{c} {};
        friend ostream& operator<<(ostream& os, Item& tempItem){
            os << tempItem.getDescription() << ": $" << tempItem.getPrice()<< endl;
            return os;
        }

    private:
        string itemDescription;
        double cost;
};

