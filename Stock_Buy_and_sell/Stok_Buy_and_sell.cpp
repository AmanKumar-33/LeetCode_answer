// you are given an array of prices where prices[i] is the price of a given stock on an ith day.
#include<bits/stdc++.h>
using namespace std;

int StockMaxProfit(vector<int>&arr){
    int n = arr.size();
    int maxprofit = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]> arr[i]){
                maxprofit = max(arr[j] - arr[i], maxprofit);
            }
        }
    }
    return maxprofit;
}
int main(){
    vector<int> arr = {7,6,4,3,1};
    int maxpro = StockMaxProfit(arr);
    cout<<"MaxProfit : "<<maxpro<<endl;
}