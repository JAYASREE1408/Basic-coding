#include<stdio.h>
int main(){
	char str[50],rev[50],length=0;
	scanf("%[^\n]",str);
// 	int i=0,space=0;
// 	while(str[i]!='\0'){
// 		length++;
// 		i++;
// 		// if(str[i]==" ")
// 		// 	space++;
		
// 	}
// 	// for(i=0;i<=length;i++){

// 	// }
// 	int l=length;
// 	for(i=0;i<=l && str[i]!=' ';i++){
// 		rev[i]=str[length];
// 		length--;
// 	}
// 	for(int j=l;j>=0;j--){
// 		printf("%c",rev[j]);
// 	}
// printf("\n");
// }

	int i=0;
	while(str[i]!='\0'){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	i++;
	printf("%s\n",str);

}