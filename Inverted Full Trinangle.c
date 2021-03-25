/*
Enter the number of elements: 7
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
 
#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(k=(2*n-i-1);k>i;k--){
			printf("*");
		}
		printf("\n");
	}
}
