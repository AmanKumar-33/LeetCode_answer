#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    int count = 0;

    for(int i =1;i<n;i++){
        if(arr[i] < arr[i-1]){
            count++;
        }

    }
    if(arr[n-1] > arr[0]){
        count++;
    }
    return count <= 1;
        
}


int main(){
    int n = 5;
    int arr[] = {2,1,3,4,6};
    isSorted(arr,n);
    printf("%s",isSorted(arr,n) ? "true" : "false");


}