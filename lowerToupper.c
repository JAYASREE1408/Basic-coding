#include<stdio.h>
int main(){
	char str[50];
	gets(str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
		i++;
	}
	printf("%s\n",str);
}