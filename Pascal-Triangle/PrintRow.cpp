#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

vector<int> PrintRow(vector<int> & row){
    vector<int> newRow;
    newRow.push_back(1);
    long long ans = 1;
    for(int col = 1;col<row.size();col++){
        ans = ans*(row.size()-col+1);
        ans = ans/col;
        newRow.push_back(ans);
    }
    return newRow;
}
