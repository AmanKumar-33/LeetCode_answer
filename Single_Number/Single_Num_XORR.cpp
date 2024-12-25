// Here we will use the Xor operator for finding the single element

// As we know that using xor with same number gives 0 but with other it gives nothing
#include<bits/stdc++.h>
using namespace std;

int findSingleElemet(vector<int>&arr){
    int xorr = 0;
    int n = arr.size();
    for(int i =0;i<n;i++){
        xorr = xorr^arr[i];
        cout<<"XORR"<<arr[i]<<":"<<xorr<<endl;
    }
    return xorr;
}
int main(){
    vector<int>arr = {4,1,2,1,2};
    int ans = findSingleElemet(arr);
    cout<<"single Element is:"<<ans<<endl;
    return 0;
}