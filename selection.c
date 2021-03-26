#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the no of array elements: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}