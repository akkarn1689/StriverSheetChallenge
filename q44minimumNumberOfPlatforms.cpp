int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int cnt=1;
    int ans=1;

    int i=1,j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            cnt++;
            i++;
        }
        else if(at[i]>dt[j]){
            cnt--;
            j++;
        }
        ans=max(ans,cnt);
        
    }
    return ans;
}