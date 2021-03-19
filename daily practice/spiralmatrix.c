#include<stdio.h>
int main(){
	int r1=0,c1=0,r,c;
	printf("Enter no. of rows and columns: ");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	while(r1<r && c1<c){
		for(i=c1;i<c;i++){
			printf("%d ",arr[r1][i]);
		}
		r1++;
		for(i=r1;i<r;i++){
			printf("%d ",arr[i][c-1]);
		}
		c--;
		if(r1<r){
			for(i=c-1;i>=c1;i--){
				printf("%d ",arr[r-1][i]);
			}
			r--;
		}
		if(c1<c){
			for(i=r-1;i>=r1;i--){
				printf("%d ",arr[i][c1]);
			}
			c1++;
		}
	}
}