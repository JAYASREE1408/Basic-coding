#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	int a[n],first[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int freq=0,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int k=0;
	for(i=0;i<n;i++){
		if(a[i]!=a[i+1]){
			first[k]=a[i];
			k++;
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}