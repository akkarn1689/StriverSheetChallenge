#include <bits/stdc++.h> 

int cntPaths(vector<vector<int>>& dp,int i,int j,int m,int n){
	if(i>=m || j>=n) return 0;
	if(i==m-1 && j==n-1) return 1;
	if(dp[i][j]) return dp[i][j];
	return dp[i][j]=cntPaths(dp,i+1,j,m,n)+cntPaths(dp,i,j+1,m,n);

}
int uniquePaths(int m, int n) {
	// Write your code here.
	// vector<vector<int>> vis(m,vector<int>(n,0));
	// int cnt=0;
	// dfs(vis,0,0,m,n,cnt);
	// return cnt;

	vector<vector<int>> dp(m+1,vector<int>(n+1,0));
	return cntPaths(dp,0,0,m,n);
}