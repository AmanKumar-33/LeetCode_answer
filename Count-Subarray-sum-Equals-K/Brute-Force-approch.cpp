#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int SubarraySumEqualToK(vector<int>& array, int k){
    int count = 0;
    int n = array.size();
    for(int i =0;i<n;i++){
        int sum = 0;
        for(int j =i;j<n;j++){
            sum += array[j];
            if(sum == k){
                count++;
            }

        }
    }
    return count;
}
// writing the main function
int main(){
    vector<int> array = {1,1,1};
    int k = 2;
    cout<<SubarraySumEqualToK(array,k);
}