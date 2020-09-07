# Max-sum-subarray
#include<stdio.h>
int main(int arr[],int n)
int i,max_so_far=arr[0],max=arr[0];
for(i=0;i<n;i++)
{
  max_so_far=max(arr[i],max_so_far+arr[i]);
if(max_so_far>max)
   max=max_so_far;
else
  max=0;
}
