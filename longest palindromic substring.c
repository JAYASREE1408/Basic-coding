//to find longest palindromic substring in string
//madam i am from malayalam
//malayalam
#include<stdio.h>
int main()
{
 char str[100];
 int i,j,max[2],l,flag,m,mid,k;
 max[0]=1;
 scanf("%[^\n]%*c",str);
 for(l=0;str[l]!='\0';l++);
 for(i=0;i<l-1;i++)
 {
   for(m=i+1;m<l;m++)
   {
    mid=(i+m)/2;
    j=i;
    k=m;
    flag=0;
    while(j<=mid)
    {
     if(str[j]!=str[k])
    {
        flag=1;
        break;
     }
     j++;
     k--;
    }
    if(flag==0&&max[0]<m-i+1)
    {
      max[0]=m-i+1;
      max[1]=i;
    }
   }
}
if(max[0]!=1)
{
 for(i=max[1];i<max[1]+max[0];i++)
       printf("%c",str[i]);
}
else
  printf("%c",str[0]);
 return 0;
}
