// alorithm for minimum element in rotated sorted array 
/*
*@param nums: a rotated sorted array
*@return: the minimum element in the array
*@author: Aman Kumar
*@ algotrithm: using binary search to find the minimum element


*/
#include<iostream>
#include<vector>
#include<climits> // for INT_MAX
using namespace std;

class solution{
public:
// as this problem is to find the smallest element in the rotated sorted array
int seach(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = low +(high-low)/2;
        // check if mid element is the smallest element
        if(arr[low] <= arr[high]){
            ans = min(ans,arr[low]);
            break;

        }
        if(arr[low] <= arr[mid]){
            ans = min(ans,arr[low]);
            low = mid +1;
        }
        else{
            ans = min(ans,arr[mid]);
            high = mid -1;
        }
        


    }
    return ans;
    
       
}
};
int main(){
    solution s;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = s.seach(arr);
    cout << "The minimum element is: " << ans <<endl;
    return 0;
}
