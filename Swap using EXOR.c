#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("The numbers without swapping is: %d %d ",a,b );
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nThe numbers after swapping is: %d %d ",a,b );
}
