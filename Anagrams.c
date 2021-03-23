#include<stdio.h>
int main(){
	char s1[20],s2[20];
	int a[26]={0},b[26]={0};
	gets(s1);
	gets(s2);
	int i=0;
	while(s1[i]!='\0'){
		a[s1[i]-'a']++;
		b[s2[i]-'a']++;
		i++;
	}
	int count=0;
	for(i=0;i<26;i++){
		if(a[i]!=b[i]){
			count++;
		}
	}
	if(count==0){
		printf("They are anagrams!\n");
	}
	else{
		printf("They are not anagrams!\n");
	}
}
