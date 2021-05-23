#include<stdio.h>
int main(){

	int i,j,n;
	printf("Enter the no of elements in array!");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in array: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n-1;i++){
		if(i%2==0){
			if(a[i]<a[i+1]){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		else{
			if(a[i]>a[i+1]){
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

//Enter the no of elements in array!8
//Enter the elements in array: 10
//5
//6
//3
//2
//20
//100
//80
//10 5 6 2 20 3 100 80
