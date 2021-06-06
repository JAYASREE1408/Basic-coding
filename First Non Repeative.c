//first non-repeated character in string

#include<stdio.h>
#include<stdlib.h>
int main()
{
 char str[100];
 int i,j,flag=0,n,k;
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 for(n=0;str[n]!='\0';n++);
 for(i=0;i<n;i++)
 {
  flag=0;
     for(j=0;j<n;j++)
      {
    
    if(i!=j){
       if(str[i]==str[j])
       {
          flag++;
       }
      }
  }
  if(flag==0)
  {
     printf("the first non-repeated character is %c\n",str[i]);
     exit(1);
 }
 }
 printf("There is no non-repeated character\n");
 return 0;
}

or


//first non-repeated character in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
 char str[100];
 int i,j,flag=0,n,k;
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 for(n=0;str[n]!='\0';n++);
 for(i=0;str[i]!='\0';i++)
 {
     flag=0;
  for(k=i-1;k>=0;k--)
  {
      if(str[i]==str[k])
      {
          if(i==n-1)
            flag=1;
          if(i+1<n)
          {
            i++;
            k=i;
          }

      }
  }
  for(j=i+1;str[j]!='\0';j++)
  {
   if(str[i]==str[j])
   {
      flag=1;
      break;
   }
  }
  if(flag==0)
  {
     printf("the first non-repeated character is %c\n",str[i]);
     exit(1);
 }
 }
 if(flag==0)
    printf("the first non-repeated chracter is %c\n",str[i-1]);
 else
    printf("there is no non-repeated character\n");
 return 0;
}
