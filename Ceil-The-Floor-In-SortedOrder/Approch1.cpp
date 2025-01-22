#include<iostream>
#include<cassert>
#include<vector>
using namespace std;

int ceilthefloor(vector<int>arr,int n,int target){
    int index = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high -low)/2;
        if(arr[mid] >=target){
            index = mid;
            high = mid -1;


        }
        else{
            low = mid + 1;
        }
    }
    return index;
}
int main(){
    vector<int>arr = {3,4,13,13,13,20,40};
    int n = arr.size();
    int target = 13;
    int index = ceilthefloor(arr,n,target);
    cout<<index<<endl;
    return 0;
}