#include<stdio.h>
#include <math.h>
int main(){
	int n,sum=0;
	printf("Enter the number : \n");
	scanf("%d",&n);
	int num=n,ans=n,count=0;
	while(num>0){
		num=num/10;
		count++;
	}
	while(n>0){
		int rem=n%10;
		sum=sum+(pow(rem,count));
		n=n/10;
	}
	if(ans==sum){
		printf("It is an armstrong number!\n");
	}
	else{
		printf("It is not an armstrong number!\n");
	}
}