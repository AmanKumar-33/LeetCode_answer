// writing the code for moore voting algorithm
// #include<iostream>
// using namespace std;
#include<vector>
int majorityElement(vector<int>& nums){
    int majority =0;
    int count = 0;
    for(int num: nums){
        if(count == 0){
            majority = num;
        }
        if(num == majority){
            count++;

        }
        else{
            count--;
        }
        

    }
    return Majority;
}