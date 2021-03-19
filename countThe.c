#include <stdio.h>
int main(){
	char str[50];
	int count=0;
	scanf("%[^\n]",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='t'&& str[i+1]=='h' && str[i+2]=='e' &&str[i+3]==' '){
			count++;
		}i++;
	}
	printf("%d",count);
}