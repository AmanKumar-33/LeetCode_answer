// writing the same code using freq array where we will store the
//  frequency of each element in the array

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s,string t){
// base condition is same 
if(s.length()!=t.length()){
    return false;

    // store the frequency of each element in the array
    int freq[26] ={0};
    for(int i=0;i<s.length();i++){
        freq[s[i]-'A']++;
         
    }
    for(int i=0;i<t.length();i++){
        freq[t[i]-'A']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }


}
return true;
}

int main(){
    string s = "listen";
    string t = "silent";
    isAnagram(s,t) == true ? cout<<"True" : cout<<"False";
    return 0;
}