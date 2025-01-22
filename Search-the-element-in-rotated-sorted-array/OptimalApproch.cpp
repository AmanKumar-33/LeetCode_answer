/*
Place the 2 pointers i.e. low and high: Initially, we will place the pointers like this: low will point to the first index, and high will point to the last index.
Calculate the ‘mid’: Now, inside a loop, we will calculate the value of ‘mid’ using the following formula:
mid = (low+high) // 2 ( ‘//’ refers to integer division)
Check if arr[mid] == target: If it is, return the index mid.
Identify the sorted half, check where the target is located, and then eliminate one half accordingly:
If arr[low] <= arr[mid]: This condition ensures that the left part is sorted.
If arr[low] <= target && target <= arr[mid]: It signifies that the target is in this sorted half. So, we will eliminate the right half (high = mid-1).
Otherwise, the target does not exist in the sorted half. So, we will eliminate this left half by doing low = mid+1.
Otherwise, if the right half is sorted:
If arr[mid] <= target && target <= arr[high]: It signifies that the target is in this sorted right half. So, we will eliminate the left half (low = mid+1).
Otherwise, the target does not exist in this sorted half. So, we will eliminate this right half by doing high = mid-1.
Once, the ‘mid’ points to the target, the index will be returned.
This process will be inside a loop and the loop will continue until low crosses high. If no index is found, we will return -1.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target){
        int low =0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            // left part is sorted
            if(nums[low] < nums[mid]){
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid -1;
                }
                else{
                    low = mid +1;
                }

            }
            // right part is sorted
            else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid +1;
                }
                else{
                    high = mid -1;
                }
            }
        }
        return -1;
    }
};

// Time Complexity: O(log n)
// Space Complexity: O(1)
int main(){
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout << sol.search(nums, target) << endl;
    return 0;
}