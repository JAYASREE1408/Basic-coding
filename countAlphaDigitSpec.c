#include<stdio.h>
int main(){
	char str[50];
	gets(str);
	int i=0;
	int alpha=0,dig=0,spe=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&& str[i]<='Z'){
			alpha=alpha+1;
		}
		else if(str[i]>='0' && str[i]<='9'){
			dig=dig+1;
		}
		else{
			spe=spe+1;
		}
		i++;
	}
	printf("No. of Alphabets,digits and special characters are:\n");
	printf("%d \n%d \n%d\n",alpha,dig,spe);
}