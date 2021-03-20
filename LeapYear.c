#include <stdio.h>
int main(){
	int n,i;
	printf("Enter the year!\n");
	scanf("%d",&n);
	if(n%4==0 && (n%400==0 || n%100!=0)){
		printf("The given year %d is a leap year!\n",n);
	}

}