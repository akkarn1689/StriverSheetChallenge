#include <bits/stdc++.h> 
using namespace std;
bool comparator(pair<int,int> a,pair<int,int> b){
    return (a.second/((double)a.first))>(b.second/((double)b.first));
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comparator);
    double maxValue=0,cap=w;
    for(int i=0;i<items.size();i++){
        if(items[i].first<=cap){
            cap-=items[i].first;
            maxValue+=items[i].second;
        }
        else{
            maxValue+=(items[i].second*(cap/(double)items[i].first));
            return maxValue;
        }
    }
    return maxValue;
}