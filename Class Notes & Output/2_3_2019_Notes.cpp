/* 

2/3/2019 Class Notes & Output - Vectors ADT (Abstract Data Type)

Vector is like an array but can scale (grows and shrinks automatically)
It can store any type of data; but only one type at  a time

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

int main(){

    vector<string> my_vec; //my_vec is a vector that stores strings
    string teams;
    cout << "Enter your favorite NFL teams" << endl;
    cin >> teams;
    my_vec.push_back(teams);
    cout << my_vec[0] << endl;
    

}