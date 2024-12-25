#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string reversePrefix(string word, char ch){
    int n = word.length();
    int count = 0;

    for(int i =0;i<n;i++){
        if(word[i] == ch){
            count++;

        }
    }
    int j = 0;
    while(j<=count){
        swap(word[j],word[count]);
        count--;
        j++;

    }
    
}
int main(){
    string word = "abcdefd";
    char ch = "d";
    int ans = reversePrefix(string word, char ch)
    cout<<ans<<endl;
    

}