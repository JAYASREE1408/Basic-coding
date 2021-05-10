/* Check whether a given mathematical expression is valid..
 eg. Input: (a+b)(a*b)
     output: valid
     Input; (ab)(ab+)
     output: Invalid...
     */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[50];
    gets(a);
    int count=0,count1=0;
    int i,j,res;
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]=='(')
            count++;
        if(a[i]==')')
            count1++;
        if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%')
        {
            if(a[i-1]>='a' && a[i-1]<='z' && a[i+1]>='a' && a[i+1]<='z')
                res=1;
        }
        i++;
    }
    if(count==count1 && res==1)
        printf("valid");
    else
        printf("Invalid");
}
