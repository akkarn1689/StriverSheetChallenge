#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   unordered_map<int,int> m;
   vector<vector<int>> res;
   // sort(arr.begin(),arr.end());
   m[arr[0]]++;
   for(int i=1;i<arr.size();i++){
      if(m.find(s-arr[i])!=m.end()){
         for(int j=0;j<m[s-arr[i]];j++){
            vector<int> v;
            v.push_back(s-arr[i]);
            v.push_back(arr[i]);
            sort(v.begin(),v.end());
            res.push_back(v);
         }
      }
      m[arr[i]]++;
   }
   sort(res.begin(),res.end());
   return res;
}