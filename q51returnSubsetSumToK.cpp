#include <bits/stdc++.h>
using namespace std;

void f(int ind, vector<int>& arr,vector<int>& temp,vector<vector<int>>& ans,int& sum,int k){
    if(sum==k){
        ans.push_back(temp);
    }

    for(int i=ind;i<arr.size();i++){
        if(i==ind || arr[i]!=arr[i-1]){
            sum+=arr[i];
            temp.push_back(arr[i]);
            f(i+1,arr,temp,ans,sum,k);
            sum-=arr[i];
            temp.pop_back();
        }
    }
}


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    // sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int sum=0;
    f(0,arr,temp,ans,sum,k);
    return ans;
}