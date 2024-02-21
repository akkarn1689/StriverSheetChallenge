void f(int ind,int n,vector<int>& num,vector<int>& ans,int& sum){
	if(ind>=n){
		ans.push_back(sum);
		return;
	}
	sum+=num[ind];
	f(ind+1,n,num,ans,sum);
	sum-=num[ind];
	f(ind+1,n,num,ans,sum);

	return;
}


vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	int n=num.size();
	vector<int> ans;
	int sum=0;
	f(0,n,num,ans,sum);
	sort(ans.begin(),ans.end());
	return ans;
}