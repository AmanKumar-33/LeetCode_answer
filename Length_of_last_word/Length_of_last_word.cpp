// writing the code for finding the length of last world in a sentance
#include<string>
#include<iostream>
using namespace std;

int lengthString(string s){
    int n = s.length();
    // edge condition for the code
    if(n == 0){
        return 0;
    }
    int start = 0;
    int end;
    // left trim the space 
    while(start < n && s[start] ==' ' ){
        start++;
    }
    // right trim the emepty space
    end = n-1;
    while(end >= 0 && s[end] == ' '){
        end--;
    }
    // if the starting index id greater than end 
    if(start > end){
        return 0;

    }
    int pos = end;
    while(pos >= start){
        if(s[pos] == ' '){
            return end-pos;

        }
        else{
            pos--;
        }

    }
    return end-pos;

}
int main(){
    string s ="   fly me   to   the moon  ";
    cout<<"lengthofString -> "<<lengthString(s)<<endl;
}