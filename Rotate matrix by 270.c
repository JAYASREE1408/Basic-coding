/*
Enter the matrix:                                                                                                             
1 2 3                                                                                                                         
4 5 6                                                                                                                         
7 8 9                                                                                                                         
Enter matrix after 270 degree rotation is:                                                                                     
3 6 9                                                                                                                         
2 5 8                                                                                                                         
1 4 7 
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
    for(j=c-1;j>=0;j--)
    {
        for(i=0;i<r;i++)
        {
            temp[c-j-1][i]=a[i][j];
        }
    }
    
    printf("Enter matrix after 270 degree rotation is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}
