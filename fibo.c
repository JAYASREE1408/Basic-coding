#include<stdio.h>
int main(){
	int n,i,j,t1=0,t2=1,t3;
	printf("Enter the total no of terms:");
	scanf("%d",&n);
	printf("%d %d",t1,t2);
	for(i=2;i<n;i++){
	t3=t1+t2;
	printf(" %d",t3);
	t1=t2;
	t2=t3;
}
}