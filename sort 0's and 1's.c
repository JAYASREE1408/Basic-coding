#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            a[low]=a[low]^a[mid];
            a[mid]=a[mid]^a[low];
            a[low]=a[low]^a[mid];
            low++;
            mid++;
        }
        
        else if(a[mid]==1)
        {
            a[mid]=a[mid]^a[high];
            a[high]=a[high]^a[mid];
            a[mid]=a[mid]^a[high];
            high--;
        }
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
