/* 
1/25/2019 Class Notes & Output

Recitation covering Array's and Vector's

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


void print_vector(vector<int> vect);
void print_vector(vector<int> vect){
    for (int i = 0; i < vect.size(); i++)
        cout << "The vector elements are: " << i << " " << vect[i] << endl;

}

int main(){
    //int my array[3] = 10 {10,20,30}
    //vector<data_type> name_of_the_vector();

    vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(20);
    my_vector.push_back(30);
    my_vector.push_back(40);
    my_vector.push_back(50);

    cout << my_vector.size() << endl;


//To erase an element from the vector
my_vector.erase(my_vector.begin() + 3);

print_vector(my_vector);

cout << endl;

print_vector(my_vector);

//To check if the vector is empty or not

cout << "The vector is: " << my_vector.empty() << endl;

print_vector(my_vector);

cout << endl;
cout << endl;
cout << "Now begins the part on constructors" << endl;

//Pretend like this is a new main



}

//Let's create a class
class BMI {
    public:
        BMI(); //Default constructor
    private:
        string newName;
        int newHeight;
        double newWeight;
};

//Function Definitions
BMI :: BMI()
{
    newHeight = 0;
    newWeight = 0.0;
}

