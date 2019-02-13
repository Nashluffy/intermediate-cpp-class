/*
Getters:
    getDescription
    getPrice
Setters:
    setDescription
    setPrice
*/
#include <string>
#pragma once

using namespace std;

class Item{
    public:
        void setDescription(string i);
        void setPrice(double c);
        string getDescription();
        double getPrice();
        Item() : itemDescription{} , cost{} {};
        Item(string i, double c) : itemDescription{i} , cost {c} {};

    private:
        string itemDescription;
        double cost;
};

