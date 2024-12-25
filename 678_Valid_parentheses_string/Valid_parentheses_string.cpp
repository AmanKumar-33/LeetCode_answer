#include<bits/stdc++.h>
using namespace std;

bool ValidParenthses(string s){
    int n = s.length();
    stack<int>left;
    stack<int>star;
    for(int i =0;i<n;i++){
        if(s[i] == '('){
            left.push(s[i]);

        }
        else if(s[i] == '*'){
            star.push(s[i]);
        }
        else{
            if(!left.empty()){
                left.pop();
            }
            else if(!star.empty()){
                star.pop();
            }
            else{
                return false;
            }
        }

    }
    while(left.size != 0){
        if(star.size() == 0){
            return false;
        }
        if(star.top>left.top()){
            star.pop();
            left.pop();
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    
}