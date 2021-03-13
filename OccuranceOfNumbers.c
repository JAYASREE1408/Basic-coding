#include<stdio.h>
int main()
{
     int n,i,j,c,a[20],t,num;	
     printf("Enter n: ");
     scanf("%d",&n);
     printf("\nEnter array:");
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(a[i]>a[j])
               {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
               }
          }
     }
     tsfor(i=0;i<n;i=j)
     {
          num=a[i];
          c=1;
          for(j=i+1;j<n;j++)
          {
               if(a[j]!=num)
                    break;
               else
                    c++;
          }
          printf("%d -> %d, ",num,c);
     }
     return 0;
}