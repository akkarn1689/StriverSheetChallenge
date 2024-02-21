#include <bits/stdc++.h> 
using namespace std;
void f(int ind,vector<int>& arr,vector<int> &temp,vector<vector<int>>& ans){
        ans.push_back(temp);
        for(int i=ind;i<arr.size();i++){
            if(i==ind || arr[i]!=arr[i-1]){
                temp.push_back(arr[i]);
                f(i+1,arr,temp,ans);
                temp.pop_back();
            }
        }
    }


vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    f(0,arr,temp,ans);

    return ans;
}