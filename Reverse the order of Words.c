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



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i,j;
	char a[50],res[50]="",word[50];
	printf("Enter the string: \n");
	gets(a);
	printf("The original string is: %s",a);
	reverse(a);
	printf("\nThe Reversed string is: %s",a);
	strcat(a," ");
	j=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			word[j]='\0';
			reverse(word);
			strcat(res,word);
			strcat(res," ");
			j=0;
		}
		else{
			word[j]=a[i];
			j++;
		}
	}
	printf("\nThe reverse string is : %s \n",res );
}

void reverse(char str[]){
	int i,n;
	for(n=0;str[n]!='\0';n++);
	for(i=0;i<n/2;i++){
		char ch=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=ch;
	}
	// for(i=0;i<n;i++){
	// 	char ch=str[i];
	// 	str[i]=str[n-1];
	// 	str[n-1]=ch;
	// 	n--;
	// }
}
