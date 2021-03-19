#include <stdio.h>
int main(){
	char str[50];
	scanf("%[^\n]",str);
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='\n';
		}i++;
	}
	printf("%s",str);
}