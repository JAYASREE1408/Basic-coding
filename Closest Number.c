// Given two numbers n,m find a number closest to n and divisible by m Note : n should not be the prime number
#include<stdio.h>
int main()
{  
  int n,m,count=0,i;
  printf("enter n and m");
  scanf("%d %d",&n,&m);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      count=1;
      break;
    }
  }
  if(count==0)
  {
    printf("n should not be prime number");
  }
  else
  {
    int q=n/m;
    int n1=m*q;
    int n2=(n*m)>0?(m*(q+1)):(m*(q-1));
    if(abs(n-n1)<abs(n-n2))
      printf("%d",n1);
    else
      printf("%d",n2);  
  }
}
