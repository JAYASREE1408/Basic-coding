////Check whether the num is pow of 3
//Enter the number:81
//True
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool ispowerofThree(int n)
{
    double result= log10(n)/log10(3);
    return result ==(int)result;
}
int main()
{
    int n,x;
    printf("Enter the number:");
    scanf("%d",&n);
    ispowerofThree(n)? printf("True"): printf("False");
    return 0;
}
