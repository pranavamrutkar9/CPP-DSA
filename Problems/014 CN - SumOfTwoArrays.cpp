#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;
	int carry = 0;
	vector<int> result;
	while(i>=0 && j>=0){
		int sum = a[i] + b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		result.insert(result.begin(), sum);
		i--;
		j--;
	}

	while(i>=0){
		int sum = a[i]+carry;
		carry = sum/10;
		sum = sum%10;
		result.insert(result.begin(), sum);
		i--;
	}
	while(j>=0){
		int sum = b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		result.insert(result.begin(), sum);
		j--;
	}
	while(carry!=0){
		int sum = carry%10;
		carry = carry/10;
		result.insert(result.begin(), sum);
	}
	return result;
}
