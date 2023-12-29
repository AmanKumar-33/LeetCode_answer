// Writing code for missing Number in array
// Given an unsorted integer array nums, find the smallest missing positive int.
#include<iostream>
using namespace std;

void MissingNumber(int array[], int n){
    int i =0;
    // make a temporary array temp[n+1]
    int temp[n+1];
    // initialize all elements of temp to 0
    for(i =0;i<=n;i++){
        temp[i] = 0;


    }
    for(int i =0;i<n;i++){
        temp[array[i] -1];
    }
    int ans;
    for(int i =0;i<=n;i++){
        if(temp[i] == 0){
            ans = i+1;
        }
    }
        cout<<ans;
    
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i =0;i<n;i++){
        cin>>array[i];
    }
    MissingNumber(array,n);
}