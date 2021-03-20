#include<stdio.h>
int main(){
	int i=0,count=0;
	char s[20];
	scanf("%[^\n]",s);
	while(s[i]!='\0'){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			count=count+1;
		}
		i++;
	}
	printf("The number of Vowels is : %d ",count);
}