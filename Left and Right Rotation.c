#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,k;
    printf("Enter the no. of elements in array:\n");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of rotation:");
    scanf("%d",&k);
    printf("The array after rotation:\n");
    printf("The right rotation: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[(n+i-k)%n]);
    }
    printf("\nThe left rotation: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[(n+i+k)%n]);
    }
}
