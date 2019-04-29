/*
2/27/2019 Class Notes - Read in a text file, and count the number of occurances of a word

*/


//To compile, g++ -std=c++11 file_name.cpp -o output_file


#include <iostream>
#include <fstream>  //File operations
#include <sstream>
using namespace std;

int main(){
    ostringstream oSS;
    ifstream ifs("DecInd.txt"); //Open file
    string line;
    int count = 0;
    string temp;
    while(!ifs.eof()){
        getline(ifs, line);
        oSS << line;
        while (!oSS.eof()) {
            if (temp == "America")
                count++;
        }
    }
    ifs.close();
    return 0;

}