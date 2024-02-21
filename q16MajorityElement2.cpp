#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    // Moore's Algorithm

    int n=arr.size();

	unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    vector<int> ans;
    for(auto it:m){
        if(it.second>n/3){
            ans.push_back(it.first);
        }
    }
    return ans;

}