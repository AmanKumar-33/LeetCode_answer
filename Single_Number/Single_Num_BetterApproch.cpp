// writing the same code but this time we will use the map data structure for hashing

#include<bits/stdc++.h>
using namespace std;

int findSingleElement(vector<int>&arr){
    int n = arr.size();
    // create a map for storing the element in the map
    unordered_map<int,int>mp;
    for(int i =0;i<n;i++){
        mp[arr[i]]++;

    }
    // find the single elemet using for element 
    for(auto it: mp){
        if(it.second == 1){
            return it.first;
        }
    }
    // in the case if the array have no single value

    return -1;
}
int main(){
    vector<int>arr = {1,2,1,2,3,5,3};
    int ans = findSingleElement(arr);
    cout<<"single Number is:"<<ans<<endl;
    return 0;
}