#include<stdio.h>
int main(){
	int r1=0,r2,c1=0,c2,n,i,j;
	printf("Enter the no. of rows and columns:");
	scanf("%d %d",&r2,&c2);
	int a[r2][c2];
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	while(r1<r2 && c1<c2){
		for(i=c1;i<c2;i++){
			printf("%d ",a[r1][i]);
		}
		r1++;
		for(i=r1;i<r2;i++){
			printf("%d ",a[i][c2-1]);
		}
		c2--;
		if(r1<r2){
			for(i=c2-1;i>=c1;i--){
				printf("%d ",a[r2-1][i]);
			}
			r2--;
		}
		if(c1<c2){
			for(i=r2-1;i>=r1;i--){
				printf("%d ",a[i][c1]);
			}
			c1++;
		}
	}
}