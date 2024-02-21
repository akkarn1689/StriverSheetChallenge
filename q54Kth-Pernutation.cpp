#include<bits/stdc++.h>

string kthPermutation(int n, int k) {
    // Write your code here.
    // string s="";
    // for(int i=0;i<n;i++){
    //     s+=to_string(i+1);
    // }
    // if(k==1) return s;
    //

    // for(int i=1;i<k;i++){
    //     next_permutation(s.begin(),s.end());
    //     // cout<<s<<'\n';
    // }
    // return s;

    int fact=1;
    vector<int> numbers;
    for(int i=1;i<n;i++){
        fact=fact*i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    string ans = "";
    k=k-1;
    while(true){
        ans=ans+ to_string(numbers[k/fact]);
        numbers.erase(numbers.begin()+k/fact);
        if(numbers.size()==0){
            break;
        }
        k=k%fact;
        fact=fact/numbers.size();
    }
    return ans;

}
