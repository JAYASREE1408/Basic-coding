#include<stdio.h>
int main(){
	int i,j;
	char s[20];
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='0' && s[i]<='9'){
			s[i]=s[i-1]-'a'+s[i]-'0'+'a';
		}
	}
	printf("%s",s);
}


//a1c1e1
//abcdef
