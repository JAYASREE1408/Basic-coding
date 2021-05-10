/*Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the
following conditions
1. 5 if a perfect square
2. 4 if multiple of 4 and divisible by 6
3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order. */

//Enter the no. of array elements:5
//Enter the array elements:10 36 54 89 12
//<89,0> <54,3> <10,3> <12,7> <36,12>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,square_value;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    int a[n],sum[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum[i]=0;
    }
    for(i=0;i<n;i++)
    {
        square_value=sqrt(a[i]);
        if(square_value * square_value == a[i])
            sum[i]+=5;
        if(a[i]%4==0 && a[i]%6==0)
            sum[i]+=4;
        if(a[i]%2==0)
            sum[i]+=3;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sum[i]>=sum[j])
            {
                sum[i]=sum[i]^sum[j];
                sum[j]=sum[j]^sum[i];
                sum[i]=sum[i]^sum[j];
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("<%d,%d> ",a[i],sum[i]);
}
