
#include <iostream>

using namespace std;

//Desired output would be enter 2^n
//ie. 2^2 would print 00 01 10 11
//Base case would be when n/1 would be 1
    //Once we hit base case, we need to return 1 & 0
void printNum(int n){
    string printMe;
    if (n/1 > 1){
        printNum(n-1);
        printNum(n-2);
    }
    else if (n/1 == 1){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}


int main(){
    printNum(3);
}