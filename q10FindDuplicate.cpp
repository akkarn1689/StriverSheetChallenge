#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int ans;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
		if(m[arr[i]]>1){
			ans=arr[i];
			break;
		}
	}
	return ans;
}
