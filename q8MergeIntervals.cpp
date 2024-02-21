#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());

    vector<vector<int>> res;
    res.push_back(intervals[0]);
    for(int i=0;i<n;i++){
        // [a,b] [c,d]
        int m=res.size();
        int a=res[m-1][0];
        int b=res[m-1][1];
        int c=intervals[i][0];
        int d=intervals[i][1];

        if(c<=b){
            res[m-1][1]=max(b,d);
        }
        else{
            res.push_back(intervals[i]);
        }
    }
    return res;
    
}
