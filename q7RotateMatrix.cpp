#include <bits/stdc++.h>

void rotate(vector<vector<int>> &mat,int l,int r,int t,int b){
    int placeholder=mat[l][t];
    int i=t,j=l+1;
    while(j<=r){
        int curr=mat[i][j];
        mat[i][j]=placeholder;
        placeholder=curr;
        j++;
    }
    j=r;
    i=t+1;
    while(i<=b){
        int curr=mat[i][j];
        mat[i][j]=placeholder;
        placeholder=curr;
        i++;
    }
    i=b;j=r-1;
    while(j>=l){
        int curr=mat[i][j];
        mat[i][j]=placeholder;
        placeholder=curr;
        j--;
    }
    j=l;i=b-1;
    while(i>=t){
        int curr=mat[i][j];
        mat[i][j]=placeholder;
        placeholder=curr;
        i--;
    }
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int l=0,r=m-1,t=0,b=n-1;
    while(l<r && t<b){
        rotate(mat,l,r,t,b);
        l++;r--;
        t++;b--;
    }
    

}