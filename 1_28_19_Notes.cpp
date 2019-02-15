/* 

1/28/2019 Class Notes & Output - Continuing with constructors


To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.

*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;



class fraction {
    public:
        fraction(int n, int d) : numerator(n), denominator(d) {} //Constructor has same name as class and no return type
        fraction(int n) : numerator{1}, denominator{1} {} //Default constructor, now have multiple constructors. This is called Overloading.
        fraction() : numerator{1}, denominator{1} {}
        void setNumerator(int n){numerator = n;}
        void setDenominator(int d);
        int getNumerator(){return numerator;}
        int getDenominator(){return denominator;}

        friend fraction operator+(fraction& f1, fraction& f2); //Not part of class - outside it. But is a friend of class
        //Friends can access private dat without beingp art of class. No need to use getters and setters
        friend ostream& operator<<(ostream& os, fraction& f);
    private:
        int numerator;
        int denominator;
};

ostream& fraction::operator<<(ostream& os, fraction& f){
    os << f.numerator << "/" << f.denominator << endl;
    return os;
}


fraction operator+(fraction& f1, fraction& f2){
    fraction res;
    res.numerator = (f1.numerator*f2.denominator + f1.denominator * f2.numerator);
    res.denominator = (f1.denominator * f2.denominator);
}


void fraction::setDenominator(int d){
    if(d == 0)
        denominator = 1;
    else
        denominator = d;
}


int main (){



fraction f1(1,2),f2(1,4),f3,f4(7);

f3 = f1 + f2;
cout << f3.getNumerator() << "/" << f3.getDenominator() << endl;
cout << f3;

}

