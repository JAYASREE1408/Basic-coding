// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.

#include<stdio.h>
int main()
{
 int n,i,sum1,j,sum=0;
 printf("Enter the no. of elements in array:\n");
 scanf("%d",&n);
printf("Enter the value of sum:\n");
scanf("%d",&sum1);
 int arr[n];
 printf("Enter array elements of +ve integer:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("the given array:\n");
for(i=0;i<n;i++)
   printf("%d ",arr[i]);
for(i=0;i<n;i++)
{
  for(j=i;j<n;j++)
  {
     sum+=arr[j];
     if(sum==sum1)
     {
       printf("\nThe sub array start and end position whose addition equals given sum is %d and %d",i+1,j+1);
       break;
     }
  }
  if(sum==sum1)
      break;
  sum=0;
}
if(sum==0)
    printf("There is no sub array whose addition equals the sum\n");
 return 0;
}
