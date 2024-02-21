#include <bits/stdc++.h> 
using namespace std;

vector<int> currency={1000,500,100,50,20,10,5,2,1};

int findMinimumCoins(int amount) 
{
    // Write your code here
    int cnt=0;
    for(int i=0;i<9;i++){
        if(currency[i]<=amount){
            int c=(amount/currency[i]);
            cnt+=c;
            amount-=(c*currency[i]);
        }
        if(amount==0) break;
    }
    return cnt;
}
