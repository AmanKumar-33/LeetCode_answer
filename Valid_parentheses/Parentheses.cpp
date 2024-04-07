#include <bits/stdc++.h>
using namespace std;

bool is_valid(string s){
    int n = s.length();
    stack<int>st;
    for(int i =0;i<n;i++){
        if(s[i] == ')'||s[i] == ']'|| s[i] == '}'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                 return false;}
           
        }
        char c = st.top();
        if((s[i] == ')' && c == '(')||(s[i] == ']' && c == '[')||(s[i] == '}' && c == '{')){
            st.pop();
        }
        else{
            return false;
        }
        

    }
    if(st.empty()){
            return true;
        }
    else{
        return false;
    }
}

int main(){
    string s = "{}()]";
    
    if (is_valid(s))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}