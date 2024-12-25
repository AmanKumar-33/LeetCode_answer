// writing an program for finding the number which is present in array single and other elemet are present twice

// Hashing using Map data structure is effective
// Arra Hashing is not effective for negative number and very large number

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int getSingleNumber(vector<int>&arr){
    int n = arr.size();
    int maxi =arr[0];
    for(int i =1;i<n;i++){
        maxi = max(arr[i],maxi);
    }
    cout<<"max"<<maxi<<endl;
//     declaring hash array of size maxi +1;
// Hash the given array
    vector<int>hash(maxi+1,0);
    for(int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    // find the single element an return the answer
    for(int i =0;i<n;i++){
        if(hash[arr[i]] == 1){
            return arr[i];
        }

    }
    // this line will never execuite if the array contains single elemets
    
    return -1;
}



int main(){
    vector<int>arr = {4,1,2,1,2};
    int ans = getSingleNumber(arr);
    cout<<"single number is:"<<ans<<endl;
    return 0;
}


    
