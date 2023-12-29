# writing the code for the Regular expression Matching 
#Input: s = "aa", p = "a"
# Output: false
# Explanation: "a" does not match the entire string "aa".
# Example 2:

# Input: s = "aa", p = "a*"
# Output: true
# Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
# Example 3:

# Input: s = "ab", p = ".*"
# Output: true
# Explanation: ".*" means "zero or more (*) of any character (.)".
import re


class Solution {
public:
    bool isMatch(string s, string p) {
        return isMatch(0,s,0,p);
        
    }
    bool isMatch(int i,string& s, int j, string &p){
        int pn = p.size(), sn = s.size();
        if(j == pn) return i ==sn;
        if(p[j+1] == '*'){
            if(isMatch(i,s,j+2,p)||i<sn && (p[j] == '.'||s[i] == p[j])&& isMatch(i+1,s,j,p))
                return 1;
            
        }
        else if(i<sn&&(p[j] =='.'|| s[i] == p[j]) && isMatch(i+1,s,j+1,p))
            return 1;
        return 0;
    } 

};
  