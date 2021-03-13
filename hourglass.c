// Input : rows_no = 7
// Output :

// 1 2 3 4 5 6 7
//  2 3 4 5 6 7
//   3 4 5 6 7
//    4 5 6 7
//     5 6 7
//      6 7 
//       7
//      6 7
//     5 6 7
//    4 5 6 7
//   3 4 5 6 7
//  2 3 4 5 6 7
// 1 2 3 4 5 6 7

#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf(" ");
		}
		for(k=i;k<=n;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=i;k<=n;k++){
			printf("%d ",k);
		}
		printf("\n");
	}
}