// #writing this program to find the Kth largest element in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthLargestElement(vector<int> &arr,int k){

    sort(arr.begin(),arr.end());
    int n = arr.size();
    printf("The %dth largest element is %d\n",k,arr[n-k]);
    printf("The %dth smallest element is %d\n",k,arr[k-1]);
}
int main(){
    vector<int>arr = {3,2,1,5,6,4};
    int k = 2;
    kthLargestElement(arr,k);
    return 0;
}