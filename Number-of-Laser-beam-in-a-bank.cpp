#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numberOfBeams(vector<string>& a) {
		int n = a.size(), m = a[0].size();
		vector <int> v;
		for(int i = 0; i < n; i++) {
			int dev = 0;
			for(int j = 0; j < m; j++) {
				if(a[i][j] == '0') continue;

				if(!dev) {
					v.push_back(1);
					dev = 1;
				} else {
					v.back()++;
				}
			}
		}

		int ans = 0;
		for(int i = 1; i < v.size(); i++) {
			ans += v[i] * v[i - 1];
		}
		return ans;
	}
};