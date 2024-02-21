#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> res;
	int i=0,j=0;
	while(i<m && j<n){
		if(arr1[i]<=arr2[j]){
			res.push_back(arr1[i]);
			i++;
		}
		else{
			res.push_back(arr2[j]);
			j++;
		}
	}
	while(i<m){
		res.push_back(arr1[i]);
		i++;
	}
	while(j<n){
		res.push_back(arr2[j]);
		j++;
	}
	return res;
}