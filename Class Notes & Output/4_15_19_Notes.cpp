
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

//It will start at MSB
/*

Calls printNum(3, "");
    Calls printNum(2, "0")
        Calls printNum(1, "00")
            Calls printNum(0, "000")
            Calls printNum(0, "001")
        Calls printNum(1, "01")
            Calls printNum(0,"010")
            Calls printNum(0,"011")
    Calls printNum(2, "1")
        Calls printNum(1,"10")
            Calls printNum(0,"100")
            Calls printNum(0,"101")
        Calls printNum(1,"11")
            Calls printNum(0,"110")
            Calls printNum(0,"111")

int main(){
    printNum(5, "");
}