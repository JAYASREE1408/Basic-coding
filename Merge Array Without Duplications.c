//merge two arrays without duplicates
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int a[50],b[50],m,n,i,j;   // ENTER THE ARRAY ELEMENTS IN SORTED ORDER....
    printf("Enter the no. of elements in array1:");
    scanf("%d",&m);
    printf("Enter the array 1 elements:\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of elements in array2:");
    scanf("%d",&n);
    printf("Enter the array 2 elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int count[100]={0},max=0;
    for(i=0;i<m;i++)
    {
        count[a[i]]++;
        if(max<a[i])
            max=a[i];
    }
    for(j=0;j<n;j++)
    {
        count[b[j]]++;
        if(max<b[j])
            max=b[j];
    }
    printf("The output array without duplicates:\n");
    for(i=0;i<=max;i++)
    {
        if(count[i]!=0)
            printf("%d ",i);
    }

}
