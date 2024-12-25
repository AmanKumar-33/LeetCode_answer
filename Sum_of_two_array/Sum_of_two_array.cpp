// writing an program for summation of two arry

#include <bits/stdc++.h> 
using namespace std;
vector<int>reverse(vector<int>v){
	int s = 0;
	int e = v.size()-1;
	while(s<e){
		swap(v[s++],v[e--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;    // here i indecate to last index
	int j = m-1;    //// here i indecate to last index
	int carry =0;
	vector<int>ans;     // for storing the answer
 
	// taking a while loop  til i & j != 0
	while( i>=0 && j>= 0){
		int val1 = a[i];
		int val2 = b[j];
		int sum = val1 + val2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;

	}
	// taking first case where a{i} is greater than b{j}
	while(i >=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	// here taking second condition
	// where b[j has larger value]
	while(j >=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	// case where carry is left
	while(carry != 0){
		int sum = carry;
		carry  = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	return reverse(ans);

}

int main(){
    int a[] = {3,4,5,6};
    int b[] = {5,3,2};

    
    return 0;

}