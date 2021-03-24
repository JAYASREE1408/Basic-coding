
// Enter the number of elements: 5
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

#include <stdio.h>
int main(){
	int n,i,j;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=1;j<n-i+1;j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
