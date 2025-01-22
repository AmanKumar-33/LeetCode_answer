// writing an code for the problem of search the element in sorted Rotated array
/*
*@ Author: Aman Kumar
*@ Date:  15-06-2016
*@ Description: This code is for searching the element in sorted rotated array
*@algorithm: Binary Search


*/
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == k){
                return true;
            }
            // edge condition
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++;
                high--;
            }
            // Check if the left part is sorted
            else if(arr[low] <= arr[mid]){
                if(arr[low] <= k && k <= arr[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            // else Right part is sorted
            else{
                if(arr[mid] <= k && k <= arr[high]){
                    low = mid +1;
                }
                else{
                    high = mid -1;
                }
            }
        }
        return false;
    }
};

// Time Complexity: O(log n) in the average case, but O(n) in the worst case due to duplicates
// Space Complexity: O(1) as we are using a constant amount of extra space

int main(){
    Solution s;
    vector<int> arr = {1};
    int k = 0;
    cout<<s.search(arr,k);
    return 0;
}