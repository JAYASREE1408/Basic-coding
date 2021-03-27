//Quick sort
#include<stdio.h>
int split(int*,int,int);
void main()
{
int arr[10];
int i,n;
void quicksort(int *,int,int);
printf("\n\nenter no.  of elements:");
scanf("%d",&n);
printf("Enter the  array elements");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
quicksort(arr,0,n-1);
printf("The sorted order of elements");
for(i=0;i<n;i++)
printf("%d \t",arr[i]);
}
void quicksort(int a[],int lower,int upper)
{
int i;
if(upper>lower)
{
i=split(a,lower,upper);
quicksort(a,lower,i-1);
quicksort(a,i+1,upper);
}
}
 int split(int a[],int lower,int upper)
{
int p,i,j,t;
i=lower+1;
j=upper;
p=a[lower];
while(i<=j)
{
while(a[i]<p)
i++;
while(a[j]>p)
j--;
if(i<j)
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
t=a[lower];
a[lower]=a[j];
a[j]=t;
return j;
}
