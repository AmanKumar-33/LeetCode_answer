// You have been given a 2-D array 'mat' of size 'N x M' where 'N' and 'M'
//  denote the number of rows and columns, respectively. The elements of 
// each row are sorted in non-decreasing order. Moreover, the first element
//  of a row is greater than the last element of the previous row (if it exists).
//  You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.
#include<bits/stdc++.h>
using namespace std;

class solution{

    public:
    bool searchMatrix(vector<vector<int>>& mat, int target){
        int n = mat.size();
        int m = mat[0].size();
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(mat[i][j] == target){
                    return true;
                }
            }
        }
        return false;

    }
};
// Time complexity: O(N*M)
// Space complexity: O(1)

int main(){
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    solution s;
    s.searchMatrix(mat, 6) ==true ? cout<<"True" : cout<<"False";
    return 0;
}
// Compare this snippet from Search-the-element-in-rotated-sorted-array/Search-the-element-in-sorted-arry-Rotated.cpp: