// writing the code for the 3sum problem
// In the given arrya we have to find the triplets whose sum is equal to the given target.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>>ThreeSum(vector<int>& nums){
//     vector<vector<int>>ans;
//     int n = nums.size();
//     sort(nums.begin(),nums.end());

// }
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n =  nums.size();
        set<vector<int>>st;
        int target = 0;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                for(int k =j+1;j<n;k++){
                    if(nums[i]+ nums[j]+nums[k] == target){
                        vector<int>temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);

                        
                    }
                }

            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
        
    }
};