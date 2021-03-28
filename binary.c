#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no of elements: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	int found=0;
	int m,l=0,u=n-1;
	printf("Enter the element to search: \n");
	int key;
	scanf("%d",&key);
	while(l<=u){
		m=(l+u)/2;
		if(key<a[m]){
			u=m-1;
		}
		
		else if(key>a[m]){
			l=m+1;
		}

		else if(key==a[m]){
			found=1;
			printf("Enter element %d is found at location %d\n",key,m );
			break;
		}

	}
	if(found==0){
		printf("Enter given element is not found!\n");
	}
}