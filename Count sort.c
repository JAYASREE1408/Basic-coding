#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the size of array: \n");
	scanf("%d ",&n);
	int a[n];
	printf("Enter the array: \n");
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	int c[max];
	for(i=0;i<max;i++){
	    c[i]=0;
	}
	for (i = 0; i < n; i++)
	{
		c[a[i]]++;
	}
	for(i=1;i<=max;i++){
	    c[i]+=c[i-1];
	}
	int op[n];
	for(i=n-1;i>=0;i--){
		op[--c[a[i]]]=a[i];
	}
	for(i=0;i<n;i++){
	    printf("%d ",op[i]);
	}
}
