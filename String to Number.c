/*  C Program to convert string to number */

#include<stdio.h>
#include<ctype.h>
void f(char *s, int *num);
int main()
{
        char str[10];
        int num;
        printf("Enter any string of numbers :");
        gets(str);
        num=0;
        integer(str, &num);
        printf("\nAfter Converting String \" %s \" to Number = %d \n",str,num);
        return 0;

}

void integer(char *s, int *n)
{
    if(*s=='\0')
        return;
    *n = (*n)*10 + *s-'0';
    return integer(s+1, n);
}
