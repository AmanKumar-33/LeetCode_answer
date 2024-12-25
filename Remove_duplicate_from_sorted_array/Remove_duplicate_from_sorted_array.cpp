#include<iostream>
using namespace std;
// if array is sorted order than we have to understand that all the duplicate value is at same place 
// we have to make an algo which find its index if its same than they can be store in array


void removenum(int arr[], int n){
    int i=0;
    // int j = n-1;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
            
        }
    }
    return 
}