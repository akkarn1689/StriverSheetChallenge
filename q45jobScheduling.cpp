#include <bits/stdc++.h> 
using namespace std;

bool comparator(vector<int> a, vector<int> b){
    return a[1]>b[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    int maxTime=0;
    vector<vector<int>> job;
    job=jobs;
    for(int i=0;i<n;i++){
        job[i].push_back(i);
    }
    sort(job.begin(),job.end(),comparator);

    for(int i=0;i<n;i++){
        maxTime=max(maxTime,job[i][0]);
    }

    vector<int> sequence(maxTime+1,-1);

    int cnt=0,maxProfit=0;

    for(int i=0;i<n;i++){
        // int j=job[i][0];
        // j>0 : schedule time minimum is 1
        for(int j=job[i][0];j>0;j--){
            if(sequence[j]==-1){
                sequence[j]=job[i][2];
                maxProfit+=job[i][1];
                cnt++;
                break;
            }
        }
    }

    return maxProfit;
}
