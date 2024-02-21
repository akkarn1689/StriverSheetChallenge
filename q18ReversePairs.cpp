#include <bits/stdc++.h>

void merge(vector<int>& arr,int l,int m,int h,int& res){
        vector<int> v(h-l+1);
        int i=l,j=m+1,k=0;

        while(i<=m){
            while(j<=h && arr[i] > 2*(long long)arr[j]){
                // res++;
                // cout<<res<<" "<<i<<" "<<j<<" "<<m<<'\n';
                j++;
            }
            res += j-m-1;
            
            i++;
        }
        // for(int i=l;i<=h;i++){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<'\n';
        // cout<<res<<'\n';
        // cout<<'\n';

        i=l;
        j=m+1;
        while(i<=m && j<=h){
            if(arr[i]<arr[j]){
                v[k]=arr[i];
                i++;k++;
            }
            else{
                v[k]=arr[j];
                j++;
                k++;
            }
        }
        while(i<=m){
            v[k++]=arr[i++];
        }
        while(j<=h){
            v[k++]=arr[j++];
        }
        for(int i=l;i<=h;i++){
            arr[i]=v[i-l];
        }
    }
    void mergeSort(vector<int>& arr,int l,int h,int& res){
        if(l>=h) return;
        
        int m=(l+h)/2;
        mergeSort(arr,l,m,res);
        mergeSort(arr,m+1,h,res);
        merge(arr,l,m,h,res);
        return;
    }
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	    // int n=arr.size();
        int res=0;
        mergeSort(arr,0,n-1,res);
        return res;	
}

