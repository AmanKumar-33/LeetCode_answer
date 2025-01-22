/*
*@title Find the Rotation Count in Rotated Sorted array
Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
After 1st Rotation : [9, 2, 4, 6]
After 2nd Rotation : [6, 9, 2, 4]
*/
// include header files
#include<iostream>
#include<vector>
#include<cassert>
#include<climits>
using namespace std;

class solution{
    public:
    int FindKthRotation(vector<int>& arr){
        int n = arr.size();
        int  low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;
            if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
                return mid;
            }
            else if(arr[mid] <= arr[high]){
                high = mid - 1;
            }
            else if(arr[mid] >= arr[low]){
                low = mid + 1;
            }
        }
    }
};
int main(){
    solution s;
    vector<int> arr = {4,5,6,7,0,1,2,3};
    assert(s.FindKthRotation(arr) == 4);
    cout<<"Test Passed"<<endl;
    return 0;
}