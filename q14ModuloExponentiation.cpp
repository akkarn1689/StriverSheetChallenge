#include <bits/stdc++.h>

typedef long long ll;
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	ll res=1;
	ll a=x;
	while(n){
		if(n&1){
			res=((res)%m)*(a%m)%m;
			n--;
		}
		else{
			a=(a%m)*(a%m)%m;
			n=n>>1;
		}
	}
	return res;
}