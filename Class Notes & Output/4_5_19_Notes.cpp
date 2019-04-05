#include <iostream>
#include <vector>

using namespace std;

bool search(vector<int>& nums, int n, int left, int right){
    //Find base condition first - One element

    //Recursively call search
    if(left < right)
        return false;
    if (nums[(right-left)/2] == n)
        return true;
    else if(nums[(right-left)/2] < n)
        //search left half
        search(nums, n, left, (right-left)/2);
    else
        search(nums,n,(right-left)/2 + 1, right);
        //search right half
}


int main()
{
    vector<int> nums{3, 7, 16, 22, 85, 102, 555, 999};
    if(search(nums, 555, 0, nums.size()))
        cout << "Number Present" << endl;
    else
        cout << "Number Absent" << endl;
    
}