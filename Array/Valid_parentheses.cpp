// writing code for Leetcode Question No-20 Valid Parentheses
// QUESTION: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
//          An input string is valid if:
//          1. Open brackets must be closed by the same type of brackets.
//          2. Open brackets must be closed in the correct order.
//          3 every close bracket must have the same corresponding  open bracket.
// example: Input: s = "()[]{}"
//          Output: true
//          Input: s = "([)]"
//          Output: false
//          Input: s = "{[]}"

#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s){
    stack<char> temp;
    for(int i =0;i<s.size();i++){
        if(temp.empty()){
            temp.push(s[i]);
        }
        else(temp.top()=='('&& s[i] ==')'|| temp.top() =='{'&& s[i] =='}'|| temp.top() =='['&& s[i] ==']'){
            temp.pop();
        }
        else{
            temp.push(s[i]);
        }

            
        
    }
    if(temp.empty()){
        return true;
    }
    else{
        return false;
    }
    
}
// writing the main function for the program
int main(){
    string s;
    cin>>s;
    // giving the input string
    
    cout<<isvalid(s)<<endl;
    return 0;
}