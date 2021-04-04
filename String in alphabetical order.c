//Given a string arrange the characters in alphabetical order 
#include <stdio.h>

int main()
{
   char s[50];
   int i,n,j;
   scanf("%[^\n]",s);
   for(n=0;s[n]!='\0';n++);
   for(i=0;i<n-1;i++){
       for(j=i+1;j<n;j++){
           if(s[i]>s[j]){
               int temp=s[i];
               s[i]=s[j];
               s[j]=temp;
           }
       }
   }
   printf("%s",s);
}
