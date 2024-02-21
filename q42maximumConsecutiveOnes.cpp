int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int rep=0;
    int i=0,j=0;
    int ans=0;
    while(i<n){
        if(arr[i]==0){
            rep++;
        }
        
        while(rep>k){
            
            if(arr[j]==0)
                rep--;
            j++;
        }
        ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}
