#include<stdio.h>
int main(){
	char str[50];
	scanf("%s",str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if(str[i]>= 'a' && str[i]<= 'z' || str[i]>= 'A' && str[i]<= 'Z'){
			printf("%c",str[i]);
		}
	}
}
