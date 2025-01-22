// writing the code to find the number in rotated sorted array
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> & arr, int target){
    int n = arr.size();
    for(int i =0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(arr, target);
    return 0;
}