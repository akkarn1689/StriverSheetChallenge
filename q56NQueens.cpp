void addAnswer(vector<vector<int>>& ans,vector<vector<int>>& board,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

void f(int row,vector<vector<int>> &board,vector<vector<int>>& ans,vector<int>& upperCol,vector<int>& leftDiagonal,vector<int>& rightDiagonal,int n){
    if(row==n){
        // ans.push_back(board);
        addAnswer(ans,board,n);
        return;
    }

    for(int col=0;col<n;col++){
        if(upperCol[col]==0 && rightDiagonal[row+col]==0 && leftDiagonal[(n-1)+(col-row)]==0){

            board[row][col]=1;
            // board.push_back();
            upperCol[col]=1;
            rightDiagonal[row+col]=1;
            leftDiagonal[(n-1) + (col-row)]=1;
            f(row+1,board,ans,upperCol,leftDiagonal,rightDiagonal,n);
            // if(ans.size()!=0) return;
            board[row][col]=0;
            upperCol[col]=0;
            rightDiagonal[row+col]=0;
            leftDiagonal[(n-1) + (col-row)]=0;
        }
        // if(ans.size()!=0) return;
    }
}

vector<vector<int>> solveNQueens(int n) {
        vector<vector<int>> ans;
        vector<int> s(n,0);
        vector<vector<int>> board(n,s);

        vector<int> upperCol(n,0), rightDiagonal(2*n-1,0),leftDiagonal(2*n-1,0);
        
        f(0,board,ans,upperCol,rightDiagonal,leftDiagonal,n);

        return ans;
    }