// #include<stdio.h>
// int main(){
// 	int min=50;
// 	char str[50],res[10];
// 	scanf("%s",str);
// 	for (int i = 0; str[i] != '\0'; i++)
// 	{
// 		int k=1;
// 		for(int j = i+1; str[j] != '\0'; j++){
// 			if(str[i]==str[j]){
// 				k++;
// 			}
// 			str[j]='*';
// 		}
// 		if(k<min && str[i]!='*'){
// 			min=k;
// 			res[0]=str[i];
// 		}
// 	}
// 	printf("The minimum occurence of %c is %d",res[0],min);

// }


#include<stdio.h>
int main(){
	int min=50,count[300]={0},length=0;
	char str[50],res;
	scanf("%s",str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		count[str[i]]++;
		length++;
	}
	for (int i = 0; i<length; i++)
	{
		if(min>count[str[i]]){
			min=count[str[i]];
			res=str[i];
		}
	}

	for (int i = 0; i<length; i++){
		if(count[str[i]]==min){
			printf("%c occurs %d times\n",str[i],min);
		}
		
	}
	
}