#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size();
    unordered_map<int,int> m;
    int xr=0;
    m[xr]++;
    int ans=0;
    for(int i=0;i<n;i++){
        xr=xr^arr[i];

        int k=xr^x;
        ans+=m[k];
        m[xr]++;
    }
    return ans;
}