
#include <iostream>

using namespace std;

//Desired output would be enter 2^n
//ie. 2^2 would print 00 01 10 11
void printNum(int n, string answer){
    string printMe;
    if (n==0){
        cout << answer << endl;
    }
    else {
        printNum(n-1, answer+"0");
        printNum(n-1, answer+"1");
    }
}



int main(){
    printNum(3, "");
}