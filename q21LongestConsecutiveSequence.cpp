#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int i=0,maxLen=1;
    while(i<n){
        int j=i+1;
        int cnt=1;
        while(j<n){
            if(arr[j]==arr[j-1]+1){
                j++;
                cnt++;
            }
            else if (arr[j]==arr[j-1]){
                j++;
            }
            else{
                break;
            }
            
        }
        maxLen=max(maxLen,cnt);
        i=j;
    }

    return maxLen;
}