// Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
// Input:
// N = 4
// A[] = {4, 2, 5, 7}
// Output:
// 5
// Explanation:
// Elements on left of 5 are smaller than 5 and on right of it are greater than 5.

#include<stdio.h>
int main()
{
 int n,i,j,flag=0;
 printf("Enter the no. of elements in array:\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("The given array:\n");
for(i=0;i<n;i++)
   printf("%d ",arr[i]);
for(i=0;i<n-1;i++)
{
   flag=0;
  for(j=i+1;j<n;j++)
  {
    if(arr[j]<=arr[i])
    {
      flag=1;
      break;
    }
   }
   if(flag==0)
   {
     for(j=i-1;j>=0;j--)
     {
       if(arr[j]>=arr[i])
       {
         flag=1;
         break;
       }
     }
     if(flag==0)
     {
        printf("\nThe no. whose all left are small and all right are greater is %d",arr[i]);
        break;
     }
   }
 }
   if(flag!=0)
      printf("\nThere is no such element whose left are small and right are big\n");
   return 0;
}
