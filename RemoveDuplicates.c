#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size: \n");
	scanf("%d",&n);
	int a[n],b[n],j=0;
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]!=a[i+1]){
			b[j++]=a[i];
		}
	}
	b[j++]=a[n-1];
	printf("The array without Duplicate is: \n");
	for(i=0;i<j;i++){
		printf("%d ",b[i]);
	}
}