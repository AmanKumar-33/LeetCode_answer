#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

vector<int>ceilthefloor(vector<int> & arr, int n,int value){
    // int n = arr.size();
    int low = 0;
    int high = n-1;
    vector<int>result(2);
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid]> value){
            high = mid-1;
        }
        else if(arr[mid]< value){
            low = mid +1;
        }
        else{
            result[0] = arr[mid];
            result[1] = arr[mid];
            return result;
            
        }
    }
    result[0] = (high == -1)? -1: arr[high];
    result[1] = (low == n)? -1 : arr[low];
}
// writing driver code
int main(){
    vector<int> arr = {5,6,8,9,6,5,5,6};
    size_t n = arr.size();
    int value = 7;
    vector<int>result = ceilthefloor(arr,n,value);
    cout<<"floor "<<result[0]<<endl;
    cout<<"ceil "<<result[1]<<endl;
    return 0;
}