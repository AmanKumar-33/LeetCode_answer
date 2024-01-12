// write a code where you have to find the string halves are Alike or not
// https://leetcode.com/problems/determine-if-string-halves-are-alike/

#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool HalvesAlike(string s){
        int n = s.length();
        int mid = n/2;
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int count = 0;
        for(int i =0;i<mid;i++){
            // first half
            char a = s[i];
            char b = s[i+mid];
            if(vowels.count(a)) count++;
            if(vowels.count(b)) count --;
        }
        
        return count ==0;


    }
}