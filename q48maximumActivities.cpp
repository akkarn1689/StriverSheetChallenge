#include <algorithm>

bool comparator(pair<int,int> a,pair<int,int> b){
    if(a.second>b.second) return false;

    return true;
}

int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> vp;
    for(int i=0;i<start.size();i++){
        vp.push_back({start[i],finish[i]});
    }
    sort(vp.begin(),vp.end(),comparator);
    int cnt=1;
    int j=0;
    for(int i=1;i<vp.size();i++){
        if(vp[i].first>=vp[j].second){
            cnt++;
            j=i;
        }
    }
    
    return cnt;
}