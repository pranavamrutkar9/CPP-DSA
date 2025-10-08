#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	string x = "", y = "";
	for(int i = 0; i<n; i++){
		x = x+to_string(a[i]);
	}
	for(int i = 0; i<m; i++){
		y = y+to_string(b[i]);
	}
	int p = stoi(x), q = stoi(y);
	string r = to_string(p+q);

	vector<int> result;
	for(int i = 0; i<r.length(); i++){
		int t = r[i] -'0';
		result.push_back(t);
	}
	return result;
}
