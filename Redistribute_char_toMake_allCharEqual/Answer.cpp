#include<iostream>
#include<vector>
#include<Bits/stdc++.h>
using namespace std;

bool makeDistribution(vector<string>& words)
{
    unordered_map<string,int> mp;
    for(auto &word :words){
        for(auto &ch :word){
            mp[ch]++;
        }
        
    }
    for(auto &[a,b] : mp){
        if(b % words.size() != 0){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> words = {"abc","aabc","bc"};
    cout<<makeDistribution(words)<<endl;
    return 0;
}