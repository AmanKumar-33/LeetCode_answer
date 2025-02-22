#include<iostream>
#include<vector>
#include<string>

using namespace std;

string longestCommonprefix(vector<string>& S){
    if(S.size() == 0)
        return "";

    string prefix = S[0];
    for(int i = 1; i <S.size(); i++){
        string s = S[i];
        if(s.size()==0 || prefix == ""){
            return "";
        }
        prefix = prefix.substr(0,min(prefix.size(),s.size()));

        // here is the second string 
        for(int k =0;k < s.size() && k < prefix.size();k++){
            if(s[k] != prefix[k]){
                prefix = prefix.substr(0,k);
                break;
            }
        }
    }
    return prefix;
}

int main(){
    vector<string> S= {"flow","flower","flask"};
    cout<<longestCommonprefix(S)<<endl;
    return 0;   
}