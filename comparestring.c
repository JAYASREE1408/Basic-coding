#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	scanf("%[^\n] %[^\n]",s1,s2);
	int i=0,flag=0;
	while(s1[i]!='\0'|| s2[i]!='\0'){
		if(s1[i]!=s2[i]){
			flag++;
		}i++;
	}
	if(flag==0){
		printf("The strings are equal!");
	}
	else{
		printf("The strings are not equal!");
	}
}