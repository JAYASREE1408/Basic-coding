// Count the sum of numbers in a string. 
// Eg: hello1wo23rld4
// Sum : 10
#include<stdio.h>
int main(){
	char s[50];
	int num[50];
	printf("Enter string:\n");
	scanf("%s",s);
	int sum=0,i=0,temp;
	while(s[i]!='\0'){
		if(s[i]>='0' && s[i]<='9'){
			temp=(s[i])-'0';
			sum=sum+temp;
		}
		i++;
	}
	printf("The sum is: %d",sum);
}
