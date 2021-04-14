/*
Print the word with odd letters as
 P                M
    R          A
       O     R
          G
       O     R
    R	       A
 P   	          M

 Enter a string:Jayasisters
 J                   s
   a               r
     y           e
       a       t
         s   s
           i
         s   s
       a       t
     y           e
   a               r
 J                   s
*/
#include<stdio.h>
#include<string.h>
int main()
{
	 int i,j,k,l;
	 char a[100];
	 printf("Enter a string:");
	 gets(a);
	 for(i=0;i<strlen(a);i++)
	 {
	 	for(j=0;j<strlen(a);j++)
	 	{
            if(i==j)
	 		{
	 			printf(" %c",a[i]);
            }
			 else if(j==strlen(a)-i-1)
			 {
			 	printf(" %c",a[j]);
			 }
			else{
			 	printf("  ");
			 }
		 }
		 printf("\n");
	 }
}
