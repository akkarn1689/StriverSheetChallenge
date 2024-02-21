#include <bits/stdc++.h> 
using namespace std;

void f(int ind,string s,vector<string>& ans){
    if(ind==s.size()){
        ans.push_back(s);
        return ;
    }
    for(int i=ind;i<s.size();i++){
        swap(s[ind],s[i]);
        f(ind+1,s,ans);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    // vector<int> temp;
    f(0,s,ans);
    return ans;
}