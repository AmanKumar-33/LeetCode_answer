/* 
*Given an array of N integers.
*Every number in the array except one appears twice.
*Find the single number in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = -1;
    int n = nums.size();
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[nums[i]]++;
    }
    for(auto i:mp){
        if(i.second == 1){
            ans = i.first;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<singleNumber(nums)<<endl;
    return 0;
}