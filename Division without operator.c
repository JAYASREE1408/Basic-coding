//division without operator
#include<stdio.h>
void main()
{
  int a,b,q=0,sign;
  float result;
  printf("enter numbers");
  scanf("%d %d",&a,&b);
  if((a<0)^(b<0))
  {
    sign=-1;
  }
  else
  {
    sign=1;
  }
  a=abs(a);
  b=abs(b);
  while(a>=b)
  {
    a=a-b;
    q++;
  }
  printf("Quotient is:%d",sign*q);  
  
  
}
