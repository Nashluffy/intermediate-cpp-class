#include <iostream>
using namespace std;

int sumDigits(int n); 

int main() 
{
    cout << sumDigits(1) << endl; // Should print 1
    cout << sumDigits(123) << endl; // Should print 6
    cout << sumDigits(57496) << endl; // Should print 31
    cout << sumDigits(777) << endl; // Should print 21
    return 0;
    
}

int sumDigits(int n) {
    //We need a way to get number off the end of the integer
    //I thought about string stream, but that's not recursive
    //Credit to https://www.geeksforgeeks.org/find-first-last-digits-number/ for the %10 method to get the first and last number
    //Any integer%10 will return the last digit of the integer
    if (n != 0){ //While there's still numbers on the end of the integer
        int sum = n % 10; //Store the number on the end 
        return (sum + sumDigits(n / 10)); //Recursively add the number on the end to the other numbers on the end
    } 
    else{
        return 0; //Base case
    }
}