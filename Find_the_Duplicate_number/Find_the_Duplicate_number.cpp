// writing code for the finding the duplicate number in the array

#include <bits/stdc++.h>   
using namespace std;

int findDuplicate(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());

    for(int i =1;i<n;i++){
        if(nums[i] == nums[i-1])
            return nums[i];
        
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
        
    }
    cout<<"DuplicateNum is:"<<findDuplicate(nums);
}