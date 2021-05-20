/*integer contains only 6 and 9, we have to change only one number
 which is larger than the previous
eg. 6696
op: 6996 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int num;
    printf("Enter the number!");
    scanf("%d",&num);
    int t=num;
    int sixidx=-1;
    while(t>0)
    {
        if(t%10==6)
            sixidx=i;
        t=t/10;
        i++;
        if(sixidx!=-1)
        {
            printf("%.lf",num+3*pow(10,sixidx));
            exit(1);
        }
    }
    return 0;
}
 
