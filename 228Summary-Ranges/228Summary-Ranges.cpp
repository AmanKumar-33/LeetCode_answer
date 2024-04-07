// writing the code for summary Ranges
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<string>SummaryRanges(vector<int>&nums){
    vector<string>ans;
    int n = nums.size();
    // writing the code for egde case
    if(n==0){
        return ans;
    }
    // writing the code for the noraml case
    int i =0;
    while(i<n){
        int start = i;
        i++;
        while(i<n&&nums[i] == nums[i-1]+1){
            i++;
            








        }
        
    }
}