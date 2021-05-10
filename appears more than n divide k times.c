//to find all elements in array that appears more than n/k times
//enter the no. of elements;
//10
//enter the value of k:
//5
//enter the array elements:
//1
//1
//1
//1
//2
//2
//3

//4
//4
//4

//1 4
#include<stdio.h>
int main()
{
 int i,n,k,j,arr[100],count,flag,l=0;
 printf("enter the no. of elements;\n");
 scanf("%d",&n);
 printf("enter the value of k:\n");
 scanf("%d",&k);
 if(k>n)
    printf("operation not possible\n");
 else
 {
  printf("enter the array elements:\n");
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
    count=1;
    flag=0;
    for(j=i-1;j>=0;j--)
    {
      if(arr[i]==arr[j])
      {
        flag=1;
        break;
      }
    }
//    if(flag==1)
//       continue;
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
          count++;
    }
    if(count>n/k)
    {
        l=1;
       printf("%d ",arr[i]);
    }
  }
 }
 if(l==0)
     printf("there is no such element that is more than n/k times");
 return 0;
}
