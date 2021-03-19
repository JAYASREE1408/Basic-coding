#include<stdio.h>

int main(){
	char s[20];
	scanf("%s",s);
	int i=0,length=0;
	while(s[i]!='\0'){
		length++;
		i++;
	}
	int flag=0;
	for(i=0;i<length;i++,length--){
		if(s[i]!=s[length-1]){
			flag++;
		}
	}
	if(flag==0){
		printf("It is a Palindrome!\n");
	}
	else
		printf("It is not a palindrome!\n");
	}