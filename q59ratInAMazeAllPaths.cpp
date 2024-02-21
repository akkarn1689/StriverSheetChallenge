#include <bits/stdc++.h> 

bool isValid(int i,int j,int n){
  if(i>=0 && j>=0 && i<n && j<n){
    return true;
  }
  return false;
}

void paths(int row,int col,vector<vector<int>>& maze,vector<vector<int>>& ans,vector<vector<int>>& pathVis,vector<int>&temp,int n){
  if(row==n-1 && col==n-1){
    ans.push_back(temp);
    return;
  }
  // if(ans[nrow])
  int dr[]={0,1,0,-1};
  int dc[]={1,0,-1,0};

  for(int i=0;i<4;i++){
    int nrow=row+dr[i];
    int ncol=col+dc[i];
    if(isValid(nrow,ncol,n) && pathVis[nrow][ncol]==0 && maze[nrow][ncol]!=0){
      pathVis[nrow][ncol]=1;
      temp[n*nrow+ncol]=1;
      paths(nrow,ncol,maze,ans,pathVis,temp,n);
      pathVis[nrow][ncol]=0;
      temp[n*nrow+ncol]=0;
    }
  }
  return;
}

vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  vector<vector<int>> ans;
  vector<int> temp(n*n,0);
  vector<vector<int>> pathVis(n,vector<int> (n,0));

  pathVis[0][0]=1;
  temp[0]=1;

  paths(0,0,maze,ans,pathVis,temp,n);

  return ans;

}