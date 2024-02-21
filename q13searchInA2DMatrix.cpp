bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();

        if(target<mat[0][0] || target>mat[n-1][m-1]){
            return false;
        }

        // int i=0,j=n-1;
        // while(i<j){
        //     int mr=(i+j)/2;
        //     if(target<=mat[mr][m-1] && target>=mat[mr][0]){
        //         int l=0,h=m-1;
        //         while(l<=h){
        //             int mid=(l+h)/2;
        //             if(mat[mr][mid]==target){
        //                 return true;
        //             }
        //             else if(mat[mr][mid]>target){
        //                 l=mid+1;
        //             }
        //             else{
        //                 h=mid-1;
        //             }
        //         }
        //     }
        //     else if(target>mat[mr][m-1]){
        //         i=mr+1;
        //     }
        //     else if(target<mat[mr][0]){
        //         j=mr-1;
        //     }
        // }

        for(int i=0;i<n;i++){
            if(mat[i][m-1]==target){
                return true;
            }
            else if(target<mat[i][m-1]){
                int l=0,h=m-1;
                while(l<=h){
                    int mid=(l+h)/2;
                    if(mat[i][mid]==target){
                        return true;
                    }
                    else if(target<mat[i][mid]){
                        h=mid-1;
                    }
                    else{
                        l=mid+1;
                    }
                }
            }
        }
        

        return false;
}