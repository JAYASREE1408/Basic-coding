// 1
// 1 1
// 1 1 2
// 1 1 2 3
// 1 1 2 3 5
#include<stdio.h>
int main(){
	int n;
	int t1=0,t2=1,t3,i,j;
	printf("Enter the no. of terms:")
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t1=0;
		t2=1;
		printf("%d\t",t2 );
		for(j=1;j<i;j++){
			t3=t1+t2;
			printf("%d\t",t3 );
			t1=t2;
			t2=t3;
		}
		printf("\n");
	} 

}
