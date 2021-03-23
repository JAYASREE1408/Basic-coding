//to print recent  min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100];
char arr[100];
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
j=1;
printf("the recent min occurrence character:");
for(i=1;i<=n;i++)
{
    for(j=n;j>=0;j--)
    if(count1[j]==i)
    {
      printf("%c",arr[j]);
      exit(1);
    }
}
return 0;
}