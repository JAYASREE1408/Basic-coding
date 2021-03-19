#include<stdio.h>
int main(){
	char str1[100],str2[50],length=0;
	printf("Enter the strings:");
	scanf("%s %s",str1,str2);
	length=0;
	while(str1[length]!='\0'){
		length++;
	}
	printf("The length is: %d\n",length );
	for (int j = 0; str2[j] != '\0'; j++, length++){
    		str1[length] = str2[j];
  	}
	str1[length]='\0';
	printf("The Concatination is: %s\n",str1);
}
