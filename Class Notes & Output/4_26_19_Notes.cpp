/*
Given an input string, reverse the string word by word.
Example:
Given s = "the sky is blue",
return "blue is sky the".
A sequence of non-space characters constitutes a word.
Your reversed string should not contain leading or trailing spaces, even 
if it is present in the input string.
If there are multiple spaces between words, reduce them to a single space 
in the reversed string.
Interesting fact: This questions was asked in coding interview by the 
following companies -
Qualcomm, Amazon, Microsoft, Cisco, and Facebook
*/

//Take each word in string, delimited by space, and store it in vector
//Then flip vector

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string s){
    stringstream oss;
    string individualWord;
    stack<string> outputStack;
    while(oss >> individualWord){
        outputStack.push(individualWord);
    }
    string returnString;
    while(!outputStack.empty){
        returnString += outputStack.top() + " ";
        outputStack.pop();
    }
    return returnString;
}
int main(){
    
    cout << reverseString("the sky is blue") << endl; // Should print - blue is sky the
    cout << reverseString("To be or not to be that is the question") << endl; // Should print - question the is that be to not or be to
    
    return 0;
}