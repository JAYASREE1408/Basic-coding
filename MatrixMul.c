#include <stdio.h>
int main(){
	int c1,c2,r1,r2,i,j,k;
	printf("Enter the no of rows and columns in a and b: ");
	scanf("%d %d %d %d",&r1,&r2,&c1,&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	if(r2==c1){
		printf("Enter the elements of a:");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of b:");
		for(i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("Multiplication of Matrix is:");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				c[i][j]=0;
				for(k=0;k<r2;k++){
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			printf("%d ",c[i][j]);
			}
		printf("\n");
		}
	}
}
