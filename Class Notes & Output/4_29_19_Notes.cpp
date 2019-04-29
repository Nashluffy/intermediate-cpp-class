//Remove duplicate and stop words in a sentence


#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

string delDupStop(string s, vector <string>& stopWords){
    string returnString, token;
    stringstream oss;
    stack<string> tokenizedString;
    while(oss >> token){
        tokenizedString.push(token);
    }
    while(!tokenizedString.empty()){
        for(auto it:stopWords){
            if (tokenizedString.top() == it){
                tokenizedString.pop();
            }
            else{
                returnString += tokenizedString.top();
                tokenizedString.pop();
            }
        }
    }


    return returnString;
}

int main(){
    vector<string> stop_words = {"a", "an", "the"};
    cout << delDupStop("To be or not to be that is the question", stop_words) << endl;
    //should output - To be or not that is question
    return 0;
}