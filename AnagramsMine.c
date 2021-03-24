/*
hello
ollhe
The two strings are anagrams!
*/

#include <stdio.h>
int main(){
	int i,n,j,count=0;
	char a[30],b[30];
	int x[26]={0},y[26]={0};
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b)){
		printf("The two strings are not anagrams!");
	}
	else{ 
		i=0;
		while(a[i]!='\0'){
			x[a[i]-'a']++;
			y[b[i]-'a']++;
			i++;
		}
		for(i=0;i<26;i++){
			if(x[i]!=y[i]){
				count++;
			}
		}
			if(count==0){
				printf("The two strings are anagrams!\n");
			}

			else{
				printf("The two strings are not anagrams!\n");
			}
		
	}
}
