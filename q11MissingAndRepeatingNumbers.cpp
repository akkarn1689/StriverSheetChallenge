#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
	long long int m=0,r=0;
	long long a=n;
	long long int s=(a*(a+1))/2;
	long long int s2=(a*(a+1)*(2*a+1))/6;
	
	for(int i=0;i<n;i++){
		s-=(long long)arr[i];
		s2-=((long long)arr[i]*(long long)arr[i]);
	}

	
	s2=((s2/s));
	m=(s+s2)/2;
	r=m-s;
	return {(int)m,(int)r};	
}
