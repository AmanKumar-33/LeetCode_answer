// Sort both the string and compare each and every letter of both strings.
//  If all letters matched then, print true. Otherwise, print false.

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s,string t){
    // base condition
    if(s.length() != t.length()){
        return false;
    }
    // sort both strings
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s == t){
        return true;
    }
    return false;
    

}

int main(){
    string s = "listen";
    string t = "silent";
    // write the true and false in termianl

    isAnagram(s,t) == true ? cout<<"True" : cout<<"False";
    return 0;
}