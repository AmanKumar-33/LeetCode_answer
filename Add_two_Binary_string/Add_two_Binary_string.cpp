// Add two binary string 
// Given two binary strings a and b, return their sum as a binary string.
// Input: a = "11", b = "1"
// Output: "100"
// Example 2:
// Input: a = "1010", b = "1011"
// Output: "10101"
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

string sumBinaryString(string a, string b){
    // where result is stored 
    int lenA = a.length()-1;
    int lenB = b.length()-1;
    if(lenA > lenB){
        sumBinaryString(b,a);
    }
    int diff = lenB-lenA;

    // if two string have one value and and the carry have the 1 
    // padding 
    string padding;
    for(int i =0;i<diff;i++){
        padding.push_back('0');
    }
    a = padding +a;
    string res;
    char carry = '0';
    for(int i = a.length()-1;i>=0;i--){
        if(a[i] =='1' && b[i] == '1'){
            if(carry == '1'){
                res.push_back('1'),
                carry = '1';

            }
            else{
                res.push_back('0'),
                carry = '1';
            }
            
        }
        // condition where the value of a[i] and b[i]  is 0
        else if(a[i] =='0' && b[i] == '0'){
            if(carry == '1'){
                res.push_back('1'),
                carry = '0';
            }
            else{
                res.push_back('0');
                carry = '0';
            }
        }
        // condition where both integer have different value 
        else if(a[i] != b[i]){
            if(carry == '1'){
                res.push_back('0');
                carry = '1';
            }
            else{
                res.push_back('1');
                carry = '1';
            }

        }
        // if at the end there is carry then directly add it into the number
        
         

        
    }
    if(carry == '1'){
            res.push_back('1');
    }

    // reverse the string value 
    reverse(res.begin(),res.end());
    // to remeove the leading zeroes
    int index = 0;
    while(index +1 < res.length() && res[index] == '0'){
        index++;
    }
    return (res.substr(index));

    

}
int main(){
    string a;
    string b;
    cout<<"string a"<<endl;
    cin>>a;
    cout<<"string b"<<endl;
    cin>>b;
    sumBinaryString(a,b);
    cout<<"sum of binary string is: "<<sumBinaryString(a,b)<<endl;
    return 0;


}

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.length() - 1, j = b.length() - 1;
        int carry = 0;
        while (i >= 0 || j >= 0) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i--] - '0';
            }
            if (j >= 0) {
                sum += b[j--] - '0';
            }
            carry = sum > 1 ? 1 : 0;
            result = to_string(sum % 2) + result;
        }
        if (carry) {
            result = to_string(carry) + result;
        }

        return result;
    }
};

int main() {
    Solution solution;

    string a, b;
    cout << "Enter the first binary string: ";
    cin >> a;
    cout << "Enter the second binary string: ";
    cin >> b;

    string result = solution.addBinary(a, b);
    cout << "Sum of binary strings: " << result << endl;

    return 0;
}