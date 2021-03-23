//find the square no.s between the ranges.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j;
    printf("Enter the ranges to print square numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The perfect square between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j*j<=i;j++)
        {
            if(j*j==i)
            {
                printf("%d ",j*j);
            }
        }

    }
}