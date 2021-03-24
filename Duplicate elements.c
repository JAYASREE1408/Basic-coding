
//Duplicate elements
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,n,a[50],j,len;
  printf("enter no. of elements");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
    printf("Duplicate elements are:");
    for(i=0;i<n;i++)
  {    
        for(j=i+1;j<n;j++)
    {    
            if(a[i]==a[j]){ 
              printf("%d ", a[j]); 
              for(int z=j;z<n;z++){
                a[z]=a[z+1];
                
              } 
              j--;
              n--;    

        }    
    }      
}
}
