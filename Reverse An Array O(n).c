#include<stdio.h>
int main(){
	int i,n,j;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int res[n];
	for(i=n-1,j=0;i>=0;i--,j++){
		res[j]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",res[i]);
	}

}
