//First and last occurance
#include<stdio.h>
void main()
{ 
    int a[20];
    int n,i,first,last,m;
    printf("Enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number");
    scanf("%d",&m);
    first=-1;
    last=-1;
    for(i=0;i<n;i++)
    {
      if(a[i]==m)
      {
         if(first==-1&&last==-1)
         {
             first=i;
             last=i;
         }
         if(last!=-1)
         {
             last=i;
         }
      }
    }


         printf("first and last occurance of a %d is:%d,%d",m,first,last);
         last=0;

    }
