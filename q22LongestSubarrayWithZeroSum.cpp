#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size();
  int ans=0;
  map<int,int> m;
  m.insert({0,-1});
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0){
      ans=i+1;
    }
    else if(m.find(sum)!=m.end()){
      ans=max(ans,i-m[sum]);
    }
    m.insert({sum,i});
  }
  return ans;

}