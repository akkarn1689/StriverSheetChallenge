#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map<char,int> m;
    int l=input.length();
        
    int cnt=0;
    int mx=0;
    for(int i=0;input[i]!='\0';){
        if(m.find(input[i])==m.end()){
            m[input[i]]=i;
            cnt++;
            i++;
        }
        else{
            i=m[input[i]]+1;
            m.clear();
            mx=max(cnt,mx);
            cnt=0;
        }
    }
    mx=max(cnt,mx);
    return mx;
}