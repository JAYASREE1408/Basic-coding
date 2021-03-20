#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size: \n");
	scanf("%d",&n);
	int a[n],j=0,count=0;
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			count++;
		}
	}
	printf("The number of Duplicates is: %d",count);
	
}