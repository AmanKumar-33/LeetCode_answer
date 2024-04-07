// writing the code for finding the Duplicate num in the array using Linkedlist

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int FindDuplicate(vector<int> &nums){
    int n = nums.size();
    int slow = nums[0];
    int fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];

    }
    while(slow != fast);
    fast = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Dulplicate num is: "<<FindDuplicate(nums);
}