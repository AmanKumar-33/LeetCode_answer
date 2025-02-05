/******************************************************************************
*@file
*@brief
*@details
*Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
*You must write an algorithm with O(log n) runtime complexity.
*Input: nums = [1,3,5,6], target = 5
*nums = [1,3,5,6], target = 2
*Output: 1
*@author Aman Kumar
*
*/

#include <algorithm>  /// for std::sort function
#include <cassert>    /// for std::assert
#include <cstdint>
#include <iostream>   /// for IO operations
#include <vector>     /// for std::vector

/*****************************************************
*@namespace searchInsertPosition
*@brief Binary search searching algorihm
*/


namespace lower_bound{

uint64_t Question(std::vector<uint64_t> arr, uint64_t val) {
    int n = arr.size();
    int low = 0;
    int high = n-1
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == val){
            return mid;
        }
        else if(arr[mid] >val){
            high = mid -1;

        }
        else{
            low = mid +1;
        }

    return low;


}

}  // namespace searchInsertPosition
}  // namespace lower_bound
// static void test1() {
    // testcase #1
    // array = [1,3,5,7,9,8,6,4,2] , Value = 4
    // should return 3

    std::vector<uint64_t> arr = {3, 4, 4, 7, 8, 10};
    // std::sort(arr.begin(), arr.end());

    uint64_t target = 5;
    uint64_t expected_ans = 3;
    uint64_t derived_ans =lower_bound::Question(arr,target);
    std::cout << "Test #1: ";
    assert(derived_ans == expected_ans);
    std::cout << "Passed!" << std::endl;
// }





