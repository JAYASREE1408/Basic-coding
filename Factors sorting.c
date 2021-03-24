/* To find the factors of the numbers given in an array and to sort the numbers in descending order
according to the factors present in it.
input: 8,2,3,12,16 o/p: 12,16,8,2,3 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],t[50],i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
                flag++;
        }
        t[i]=flag;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t[i]>t[j])
            {
                t[i]=t[i]^t[j];
                t[j]=t[j]^t[i];
                t[i]=t[j]^t[i];
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[j]^a[i];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
