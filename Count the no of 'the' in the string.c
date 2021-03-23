//count the word 'the' in the string
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[100];
    int i,j,count=0,t,h,e,space,space1;
    printf("Enter the string: ");
    gets(a);
    while(a[i]!='\0')
        i++;
    for(j=0;j<=i-3;j++)
    {

        if(j-1>=0){
            space1=(a[j-1]==' ');
            t=(a[j]=='t' || a[j]=='T');
            h=(a[j+1]=='h' || a[j+1]=='H');
            e=(a[j+2]=='e' || a[j+2]=='E');
            space=(a[j+3]==' ' || a[j+3]=='\0');
            if((space1 && t&& h && e && space)==1)
                count++;
        }
        else{
            t=(a[j]=='t' || a[j]=='T');
            h=(a[j+1]=='h' || a[j+1]=='H');
            e=(a[j+2]=='e' || a[j+2]=='E');
            space=(a[j+3]==' ' || a[j+3]=='\0');
            if((t&& h && e && space)==1)
                count++;
        }
        
    }
    printf("The occurrence of the word 'the' is %d",count);
}
