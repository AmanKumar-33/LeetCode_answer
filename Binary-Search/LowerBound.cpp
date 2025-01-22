#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int LowerBound(vector<int> & arr, int target){
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int ans = arr.size();
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] >= target){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    

return ans; // Ensure the function returns the correct answer
}
int main(){
    vector<int> arr = {1,2,8,10,11,12,19};
    int target = 0;
    cout<<LowerBound(arr, target)<<endl;
    return 0;
}
