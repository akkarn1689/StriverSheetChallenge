#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    if(n<=2) return 0;

    long leftMax[n],rightMax[n];
    leftMax[0]=arr[0];
    rightMax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],arr[i]);
    }
    long trappedWater=0;
    for(int i=0;i<n;i++){
        long a=min(leftMax[i],rightMax[i]);
        if(a-arr[i]>0){
            trappedWater+=(a-arr[i]);
        }
    }
    return trappedWater;

}