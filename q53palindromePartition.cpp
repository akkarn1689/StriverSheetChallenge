#include <bits/stdc++.h> 
using namespace std;
bool isPalindrome(string str){
    int n=str.size();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]) return false;
    }
    return true;
}

void f(int ind,string &s,vector<string>& temp,vector<vector<string>>& ans){
    if(ind==s.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=ind;i<s.size();i++){
        if(isPalindrome(s.substr(ind,i-ind+1))){
            temp.push_back(s.substr(ind,i-ind+1));
            f(i+1,s,temp,ans);
            temp.pop_back();
        }
    }
}


vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    int n=s.size();
    vector<string> temp;
    vector<vector<string>> ans;
    f(0,s,temp,ans);
    return ans;
}