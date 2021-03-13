#include<stdio.h>
#define INT_MIN -2^31;
int main(){
	int i,max1,max2,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max1=INT_MIN;
	for(i=0;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
		}
	}
	max2=INT_MIN;
	for(i=0;i<n;i++){
		if(a[i]<max1 && a[i]>max2){
			max2=a[i];
		}
	}
	printf("%d\n", max2);
}