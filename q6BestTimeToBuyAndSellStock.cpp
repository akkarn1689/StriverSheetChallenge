#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int currMax=prices[n-1];
    int maxProfit=0;

    for(int i=n-2;i>=0;i--){
        int currProfit=currMax-prices[i];
        if(currMax<prices[i]){
            currMax=prices[i];
        }
        if(maxProfit<currProfit){
            maxProfit=currProfit;
        }
    }
    return maxProfit;
}