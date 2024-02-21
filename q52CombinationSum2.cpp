#include <bits/stdc++.h>
using namespace std;

void f(int ind,vector<int>& arr,vector<vector<int>>&ans,vector<int>& temp,int &sum,int target){
	if(sum==target){
		ans.push_back(temp);
	}
	for(int i=ind;i<arr.size();i++){
		if(i==ind || arr[i]!=arr[i-1]){
			sum+=arr[i];
			temp.push_back(arr[i]);
			f(i+1,arr,ans,temp,sum,target);
			sum-=arr[i];
			temp.pop_back();
		}
	}
}


vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> temp;
	int sum=0;
	f(0,arr,ans,temp,sum,target);
	
	return ans;
}
