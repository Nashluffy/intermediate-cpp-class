/* 
1/11/19 Notes 
To compile, g++ -std=c++11 file_name.cpp -o output_file
*/
#include <iostream> // Four cout and endl

using namespace std; // std::cout

int add (int i, int j); //Declare function add

int main ()
{ 
    int i = 10; // Ask the compiler to reserve one location in memory to store data of type int(4 bytes)
    int j = 20;
    cout << "Hello World" << endl; // Hello world output
    cout << "Print the integer i which is " << i << endl;
    cout << "Print the sum of i and j, "<< i + j << endl;
    cout << i%j << endl; // Prints remainder 
    cout << j/i << endl; // Integer Division
    cout << i/j << endl; // Expecting a zero
    //Comparison Operators == > < >= = !=
    // Logic AND &&, OR ||, NOT ! Output is true or false 

    //Conditionals - Do one thing or the other, depending on the condition
    if (i>j)
        cout << "i > j" << endl;
    else
        cout << "i <= j" << endl;

    //Store multiple values of the same type using an array
    int a[] = {100, 200, 300, 400}; //Array has values 1, 2, 3, 4
    cout << "The address of array a is " << a << endl; //This will print the address of the array
    //Array has a[0], a[1], a[2], a[3]
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
    //Let's use a for loop to print the array
    for(int i = 0; i < 4; i++)
        cout << a[i] << " ";
    cout << endl;
    
    //Two dimensional array can be defined by (ie. 3x3)
    // m[0]m[0] m[0]m[1] m[0]m[2]
    // m[1]m[0] m[1]m[1] m[1]m[2]
    int m[3][3];

    //This takes to long, do it in a loop
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            m[i][j] = i * j;
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //The other types of loops are do-while and while
    /*
    do { 

    }while();

    or

    while() {

    }
    */

   //Functions are important to break up code into different tasks



cout << add(42, 52) << endl;


}

int add(int i, int j){
    int functionSum = i + j;
    return functionSum;
}