// find the continuous max no.of characters in a string eg. ip: deena op: 2
//Enter a string:jayasreeee
//4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    int res=1,i=0;
    while(str[i]!=0)
    {
        int j=i+1;
        int count=1;
        while(str[i]==str[j])
        {
            count++;
            j++;
            i++;
        }
        if(res<count)
            res=count;
        i++;
    }
    printf("%d",res);
}
