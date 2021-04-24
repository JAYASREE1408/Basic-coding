//selection

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

//insertion

#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no of elements : \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		int key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}


//bubble

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
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

// count sort

#include<stdio.h>
void countsort(int a[],int n);
int max(int a[],int n);
int main(){
	int n,i,j;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int a[100];
	printf("Enter the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	countsort(a,n);
	return 0;
}

	int max(int a[],int n){
		int max=a[0],i;
		for(i=1;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		return max;
	}
	void countsort(int a[],int n){
		int k=max(a,n);
		int c[k+1],i;
		int op[n];
		for(i=0;i<=k;i++){
			c[i]=0;
		}
		for (i = 0; i < n; i++)
		{
			c[a[i]]++;
		}
		for(i=1;i<=k;i++){
		    c[i]=c[i]+c[i-1];
		}
		for(i=n-1;i>=0;i--){
			op[--c[a[i]]]=a[i];
		}
		for(i=0;i<n;i++){
		    printf("%d ",op[i] );
		
		}


	}
	
	
