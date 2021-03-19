#include <stdio.h>
int main(){
	int c,r,i,j;
	printf("Enter the no of rows and columns: ");
	scanf("%d %d",&r,&c);
	int a[r][c],b[r][c],c1[r][c];
	if(r==c){
		printf("Enter the elements of a:");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of b:");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				c1[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("The Addition matrix is:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",c1[i][j]);
			}
			printf("\n");
		}
		printf("The Transpose matrix is:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",c1[j][i]);
			}
			printf("\n");
		}
		printf("The Transpose matrix is:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d ",c1[j][i]);
			}
			printf("\n");
		}
	}
}