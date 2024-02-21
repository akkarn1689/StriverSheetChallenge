#include <bits/stdc++.h> 

struct triplet{
    int fir;
    int sec;
    int ind;
};

bool comparator(struct triplet a,struct triplet b){
    if(a.sec!=b.sec){
        return a.sec<b.sec;
    }
    return a.ind<b.ind;
}



vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();
    
    struct triplet v[n];
    for(int i=0;i<n;i++){
        v[i].fir = start[i];
        v[i].sec = end[i];
        v[i].ind = i+1;
    }

    sort(v,v+n,comparator);

    vector<int> ans;
    ans.push_back(v[0].ind);
    int prev_finish_time=v[0].sec;
    for(int i=1;i<n;i++){
        if(v[i].fir>prev_finish_time){
            ans.push_back(v[i].ind);
            prev_finish_time=v[i].sec;
        }
    }
    // sort(ans.begin(),ans.end());

    return ans;

}

// TLE ???????

// bool comparator(vector<int> a,vector<int> b){
//     if(a[1]!=b[1]){
//         return a[1]<b[1];
//     }
//     return a[2]<b[2];
// }

// vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
//     // Write your code here.
//     int n=start.size();
//     vector<vector<int>> v(n);
//     for(int i=0;i<n;i++){
//         v[i]={start[i],end[i],i+1};
//     }

//     sort(v.begin(),v.end(),comparator);

//     vector<int> ans;
//     ans.push_back(v[0][2]);
//     int prev_finish_time=v[0][1];
//     for(int i=1;i<v.size();i++){
//         if(v[i][0]>prev_finish_time){
//             ans.push_back(v[i][2]);
//             prev_finish_time=v[i][1];
//         }
//     }
//     // sort(ans.begin(),ans.end());

//     return ans;

// }