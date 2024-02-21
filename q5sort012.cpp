#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int i=-1;
   int j=n;
   int k=0;

   while(k<j){
      if(arr[k]==0){
         swap(arr[k],arr[i+1]);
         i++;
         k++;
      }
      else if(arr[k]==1){
         k++;
      }
      else if(arr[k]==2){
         swap(arr[k],arr[j-1]);
         j--;
      }

      
   }
}