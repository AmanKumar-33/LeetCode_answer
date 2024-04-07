// here the program is uisng Reversal algorithm for rotating the array in certain condition
#include<iostream>
using namespace std;

void RotateArray(int arr[],int start,int end){
    while(start<= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

    // function to rotate the k element to the right
void RotateArrayReversal(int arr[],int n,int k){
    RotateArray(arr,0,n-k-1);
    RotateArray(arr,n-k,n-1);
    RotateArray(arr,0,n-1);

}

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k =2;
    RotateArrayReversal(array,n,k);
    cout<<"after rotating element to the left :  ";
    for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

