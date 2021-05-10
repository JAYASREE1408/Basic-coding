/*
              G
            GR
          GRA
       GRAM
     GRAMP
   GRAMPR
GRAMPRO    */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter a string:");
    gets(a);
    int i,j,k,len,prev;
    int space[]={2,2,3};
    len=strlen(a);
    prev=2*len;
    for(i=0;i<len;i++)
    {
        for(j=0;j<prev;j++)
            printf(" ");
        prev=prev-space[i%3];
        for(k=0;k<=i;k++)
            printf("%c",a[(k+len/2)%len]);
        printf("\n");
    }

}
