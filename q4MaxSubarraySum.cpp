#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    // Kadane's algorithm
    long long int max_sum=arr[0];
    long long int curr_sum=arr[0];

    for(int i=1;i<n;i++){
        curr_sum+=arr[i];

        if(curr_sum<arr[i]){
            curr_sum=arr[i];
        }
        if(max_sum<curr_sum){
            max_sum=curr_sum;
        }
    }
    if(max_sum<0) return 0;
    return max_sum;
}