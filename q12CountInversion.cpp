#include <bits/stdc++.h> 

long long countAndMerge(long long arr[],long long l,long long m,long long h){
        int i=l,j=m+1;
        long long cnt=0;
        vector<long long> a;
        while(i<=m && j<=h){
            if(arr[i]<=arr[j]){
                a.push_back(arr[i]);
                i++;
            }
            else{
                a.push_back(arr[j]);
                j++;
                cnt+=(m-i+1);
            }
        }
        
        while(i<=m){
            a.push_back(arr[i]);
            i++;
        }
        
        while(j<=h){
            a.push_back(arr[j]);
            j++;
        }
        
        for(int k=l;k<=h;k++){
            arr[k]=a[k-l];
        }
        
        return cnt;
    }


long long cntInv(long long *arr,long long l,long long h){
        long long res=0;
        while(l<h){
            long long m=(l+h)/2;
            res+=cntInv(arr,l,m);
            res+=cntInv(arr,m+1,h);
            return res+=countAndMerge(arr,l,m,h);
        }
        return 0;
}


long long getInversions(long long *arr, int n){
    // Write your code here.
    return cntInv(arr,0,n-1);
}