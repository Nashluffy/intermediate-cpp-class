/* 
1/18/19 Notes 
To compile, g++ -std=c++11 file_name.cpp -o output_file

    Update your local repo from the central repo (git pull upstream master).
    Make edits, save, git add, and git commit all in your local repo.
    Push changes from local repo to your fork on github.com (git push origin master)
    Update the central repo from your fork (Pull Request)
    Repeat.
*/

//Review day, but learning about constants

#include <iostream>
using namespace std;

int main(){
    const int x = 10;

    //x = 1312; This would not work because x has been set as a read only variable
    cout << x << endl;

    //We can fill arrays with constants by using a for loop 
    //This can be used to protect arrays & the like

}


