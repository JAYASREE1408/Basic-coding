  
#include<stdio.h>
void main()
{
    int a[50];
    int n,temp,i,j,max;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    max=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<max)
       {
           max=a[i];
           break;
       }
   }
   printf("second large:%d",max);
}
