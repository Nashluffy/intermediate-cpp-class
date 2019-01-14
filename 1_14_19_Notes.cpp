/* 
1/14/19 Notes 
To compile, g++ -std=c++11 file_name.cpp -o output_file

Passing by Value
Passing by Reference
Introduction to Classes

*/

#include <iostream>
using namespace std;

void func(int x, int y);
void funcRef(int& x, int& y);

/* 
Why do we need Classes?
We have built in types. For example, int, double, etc...
In more complex programs, you want to talk about things in the program, not int, double, etc...
For example, in a game, you may want to talk about a dog, cat, etc...
Question is -- can you do something like Dog fido
*/

//How to declare a class in C++
class Dog {
    private:
        string name; //Data - name of Dog
        string sound; //Data - sound dog makes
    public:
        void setName(string n); //Function (or method) that indicates some action on the Dog type
        string getName(); //Get the name 
        void setSound(string s); //Sets the sound
        string getSound();
};

void Dog::setName(string n){
    name = n;
}

string Dog::getName(){
    return name;
}

void Dog::setSound(string s){
    sound = s;
}

string Dog::getSound(){
    return sound;
}

int main(){
    int x = 1;
    int y = 2;
    func(x, y);
    //cout << "x: " << x << " y: " << y << endl;
    funcRef(x,y);
    //cout << "x: " << x << " y: " << y << endl;


    Dog fido; //fido is a type of Dog. The compilar does not know what Dog is. So we have to tell it
    //We use classes to create our own data types
    //Here, Dog is a class (Dog type), fido is an object (instance of a class)
    //In the real world, it's objects that interact with each other. 
    fido.setName("Fido");
    cout << fido.getName() << endl;
    //Homework - set sound to woof
    fido.setSound("Woof");
    cout << fido.getSound() << endl;


}

void func(int x, int y){ //Passing by value
    x = 10;
    y = 20;
    cout << "x: " << x << " y: " << y << endl;
}

void funcRef(int& x, int& y){ //Passing by reference
    x = 10;
    y = 20;
    cout << "x: " << x << " y: " << y << endl;
}

