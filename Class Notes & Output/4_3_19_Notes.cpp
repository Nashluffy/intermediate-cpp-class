//Intro to recursion - factorials

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n==0) // Check the base case
        return 1;
    else
    {
        return n * factorial(n-1);
    }
}

int power(int n, int e)
{
    if (e==0)
        return 1;
    else{
        return n * power(n,e-1);
    }
}

int main()
{
    cout << factorial(5) << endl;
    cout << power(5,15) << endl;
}