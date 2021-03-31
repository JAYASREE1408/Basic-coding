/*
Enter the matrix:                                                                                                             
1 2 3                                                                                                                         
4 5 6                                                                                                                         
7 8 9                                                                                                                         
Enter matrix after 90 degree rotation is:                                                                                     
7 4 1                                                                                                                         
8 5 2 
9 6 3 
*/
#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter the row and column :");
    scanf("%d %d",&r,&c);
    int a[r][c],temp[r][c];
    printf("Enter the matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=r-1;i>=0;i--)
    {
        for(j=0;j<c;j++)
        {
            temp[r-1-i][j]=a[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c/2;j++)
       {
         int t=temp[i][j];
         temp[i][j]=temp[i][c-j-1];
         temp[i][c-j-1]=t;
       }
    }
    printf("Enter matrix after 180 degree rotation is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}
