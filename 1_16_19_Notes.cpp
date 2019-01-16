/* 
1/16/19 Notes 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.

*/

/*
Abstraction building your own data type with classes
Encapsulation by hiding information and only exposing a public methods (keywords - public & private)
Syntax of how to declare aclass and define its methods
*/


//Each class contains functions and data, where the functions perform actions on the data.

#include <iostream>
#include <string>

using namespace std;

class Dog { 
//Data
private:
    string name;
    string sound;
    int weight;
//Functions
public: //Can be externally accessed, default is private 
    void setName(string n); //Commonly called a Setter or Mutator
    void setSound(string s);
    void setWeight(int w);
    string getName(); //Commonly called a Getter or Accessor
    string getSound();
    int getWeight() {return weight;} //This is an inline function
};

int main(){
    Dog fido;
    Dog rover;
    //You could not set the dog name by fido.name = "fido" because name is private
    fido.setName("fido");
    fido.setSound("bark");
    cout << fido.getSound() << endl;
    rover.setName("rover");
    rover.setSound("woof");
    rover.setWeight(3);
    cout << rover.getName() << endl;
    cout << rover.getSound() << endl;   
    cout << rover.getWeight() << endl;
}

//Define the methods
void Dog::setName(string n){
    name = n;
}

void Dog::setSound(string s){
    sound = s;

}
void Dog::setWeight(int w){
    weight = w;
}

string Dog::getSound(){
    return sound;
}

string Dog::getName(){
    return name;
}