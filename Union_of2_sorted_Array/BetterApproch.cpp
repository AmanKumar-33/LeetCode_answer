#include<iostream>
using namespace std;


vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i =0;
        int j =0;
        vector<int> ans;
        int n = a.size();
        int m = b.size();
        while(i<n &&j<m){
            if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else if(a[i]> b[i]){
                ans.push_back(b[[j]])
                j++;
            }
            else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        return ans;

}
int main(){

}