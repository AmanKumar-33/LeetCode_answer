#include<iostream>
#include<cmath>
#include<vector>
#include<map>
using namespace std;

int SubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mpp;
        int count = 0,presum = 0;
        mpp[0] =1;
        for(int i =0;i<n;i++){
            // add current element to prefix sum
            presum += nums[i];
            // calculate sum
            int remove = presum -k;
            // add the number of subarry to be removed
            count += mpp[remove];
            mpp[presum] += 1;
        }


    return count;

        
}
int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<SubarraySum(nums,k);
}