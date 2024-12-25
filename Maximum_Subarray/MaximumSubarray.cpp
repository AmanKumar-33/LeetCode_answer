// writing an code for finding the maximm sum of array 

#include<bits/stdc++.h>
using namespace std;

int MaximumSubarray(vector<int>&arr){
    int n = arr.size();
    int sum = 0;
    int maxi = arr[0];
    for(int i =0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi,sum);
        if(sum <0){
            sum = 0;
        }
    }
    return maxi;

}
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = MaximumSubarray(arr);
    cout<<"Maximum subarray:  "<<ans<<endl;
}