/* 
1/23/19 Notes - Continuing with classes 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/

#include <iostream>
#include <string>
using namespace std;

class fraction {
    public:
        fraction(int n, int d) : numerator(n), denominator(d) {} //Constructor has same name as class and no return type
        fraction() : numerator{1}, denominator{1} {} //Default constructor, now have multiple constructors. This is called Overloading.
        void setNumerator(int n){numerator = n;}
        void setDenominator(int d);
        int getNumerator(){return numerator;}
        int getDenominator(){return denominator;}
    private:
        int numerator;
        int denominator;
};

void fraction::setDenominator(int d){
    if(d == 0)
        denominator = 1;
    else
        denominator = d;
}

 


int main(){
    fraction f1(1,2), f2(1,4), f3; 
    //fraction f1,f2;
    //f1.setNumerator(1);
    //f1.setDenominator(0);
    //f2.setNumerator(1);
    //f2.setDenominator(4);
    cout << f1.getNumerator() << endl; //Should print 1
    cout << f1.getDenominator() << endl; //Should print 2
    cout << f2.getNumerator() << endl; //Should print 1
    cout << f2.getDenominator() << endl; //Should print 4
    cout << f3.getNumerator() << endl;
    cout << f3.getDenominator() << endl;
}