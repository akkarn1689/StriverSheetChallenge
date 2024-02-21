#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.int n=arr.size();
        sort(arr.begin(),arr.end());
        // set<vector<int>> s;
        vector<vector<int>> v;

        // int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long int sum=arr[i];
                    sum+=arr[j];
                    sum+=arr[k];
                    sum+=arr[l];
                    if(sum==target){
                        return "Yes";
                        l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        
        return "No";
}
