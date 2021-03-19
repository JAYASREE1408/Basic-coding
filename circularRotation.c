#include<stdio.h>
int main(){
	int i,n,k,j;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// printf("Left Rotation:");
	// for(i=0;i<k;i++){
	// 	int temp=a[0];
	// 	for(j=0;j<=n-1;j++){
	// 		a[j]=a[j+1];
	// 	}
	// 	a[n-1]=temp;
	// }
	printf("Right Rotation:");
	for(i=0;i<k;i++){
		int temp=a[n-1];
		for(j=n-1;j>=0;j--){
			a[j]=a[j-1];
		}
		a[0]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}