#include <stdio.h>
#include <stdlib.h>
#define max 225

int main()
{
    char a[50];
    int freq[max],i,ascii,min;
    printf("Enter the string:");
    gets(a);
    for(i=0;i<max;i++)  // 50 indicates the frequency range...
        freq[i]=0;
    i=0;
    while(a[i]!='\0')
    {
        ascii=(int)a[i];
        freq[ascii]+=1;
        i++;
    }
    min=0;
    i=0;
    while(i<max)
    {
        if(freq[i]!=0)
        {
            if(freq[min]==0 || freq[i]<freq[min])
                min=i;
        }
        i++;
    }
    printf("Minimum occurring characters in the string is %c : %d", min,freq[min]);

}
