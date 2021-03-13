 //      1
 //     121
 //    12321
 //   1234321
 //  123454321
 // 12345654321

#include<stdio.h>
int main(){
	int i,j,n,k,l;
	printf("Enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
		printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		for(l=i-1;l>=1;l--){
			printf("%d",l);
		}
		printf("\n");

	}
	

}