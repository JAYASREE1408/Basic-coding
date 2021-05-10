/*
  4 4 4 4 4 4 4
  4 3 3 3 3 3 4
  4 3 2 2 2 3 4
  4 3 2 1 2 3 4
  4 3 2 2 2 3 4
  4 3 3 3 3 3 4
  4 4 4 4 4 4 4
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,len;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    len=2*n-1;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            int min=i<j?i:j;
            min=min < len-i ? min: len-i-1;
            min=min < len-j-1 ? min : len-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}
