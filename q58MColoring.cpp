#include<bits/stdc++.h>

bool isPossible(int node,int col,vector<vector<int>> adjL,vector<int> color){
    if(color[node]!=-1) return false;

    for(auto it: adjL[node]){
        if(color[it]==col) return false;
    }
    return true;
}

bool dfs(int node,vector<vector<int>>& adjL, vector<int>& color,int n,int m){
    if(node==n) return true;

    for(int col=1;col<=m;col++){
        if(isPossible(node,col,adjL,color)){
            color[node]=col;
            if(dfs(node+1,adjL,color,n,m)==true){
                return true;
            }
            color[node]=-1;
        }
    }
    return false;
}

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();

    vector<int> color(n,-1);

    vector<vector<int>> adjL(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1 && i!=j){
                adjL[i].push_back(j);
                adjL[j].push_back(i);
            }
        }
    }

    string ans="";
    // dfs
    if(dfs(0,adjL,color,n,m)==true){
        ans+="YES";
    }
    else{
        ans+="NO";
    }

    return ans;
    //
}