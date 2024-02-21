#include <bits/stdc++.h>



void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();

	// vis vector to mark the point whose row and column has to be updated

	// vector<vector<int>> vis(n,vector<int>(m,0));
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(matrix[i][j]==0){
	// 			for(int k=0;k<m;k++){
	// 				vis[i][k]=1;
	// 			}
	// 			for(int k=0;k<n;k++){
	// 				vis[k][j]=1;
	// 			}
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		if(vis[i][j]==1){
	// 			matrix[i][j]=0;
	// 		}
	// 	}
	// }

	int col0=0; // to check if first column needs to be set 0 so that we can use it to mark col
	int row0=0; // to check if first row needs to be set 0 so that we can use it to mark row

	for(int i=0;i<m;i++){
		if(matrix[0][i]==0){
			row0=1;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(matrix[i][0]==0){
			col0=1;
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				matrix[i][0]=0;
				matrix[0][j]=0;
			}
		}
	}

	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][0]==0 || matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	}

	if(col0==1){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}

	if(row0==1){
		for(int i=0;i<m;i++){
			matrix[0][i]=0;
		}
	}

}