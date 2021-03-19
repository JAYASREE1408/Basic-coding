Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@JAYASREE1408 
deena10545
/
C-Practice-Programs
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
C-Practice-Programs/sorting of 0,1,2's in the array.c
@deena10545
deena10545 Add files via upload
Latest commit 41446c4 2 days ago
 History
 1 contributor
41 lines (40 sloc)  947 Bytes
  
//sorting of 0,1,2's using three way partition method or dutch national flag problem...
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
    while(mid<high)
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
            mid++;
        }
        else if(a[mid]==2)
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
