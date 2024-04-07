// writing an code for the array where the value tha array is shifted from Kth index

#include<iostream>
using namespace std;

void RotateArray(int array[],int n,int k){
    // writing the code for the base condition
    if(n == 0){
        return;
    }
    k =k%n;
    if(k>n){
        return;
    }
    int temp[k];
    for(int i = n-k;i<n;i++)
    {
        temp[i-n+k] = array[i];
    }
    for(int i = n-k-1;i>=0;i--){
        array[i+k] = array[i];
    }
    for(int i =0;i<k;i++){
        array[i] = temp[i];
    }
}

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k =2;
    RotateArray(array,n,k);
    cout<<"after rotating element to the left :  ";
    for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}