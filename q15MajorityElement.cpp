#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	// Moore's Algorithm

	// step 1
	int cnt=1;
	int ind=0;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[ind]){
			cnt++;
		}
		else{
			cnt--;
		}

		if(cnt==0){
			cnt=1;
			ind=i;
		}
	}

	// step 2
	cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[ind]){
			cnt++;
		}
	}
	
	if(cnt<=n/2){
		return -1;
	}
	return arr[ind];
}