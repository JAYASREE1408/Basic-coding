#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i;
    printf("Enter the string:");
    gets(a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
            printf("%s ",&(a[i])+1);
        }
    }
    printf("%s",a);
}
