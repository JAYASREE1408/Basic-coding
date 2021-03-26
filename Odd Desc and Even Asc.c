/*Elements in odd position as Desc order and even position in ascending order.
Enter the total number of elemnts: 
10
1
2
3
4
5
6
7
8
9
10
9 2 7 4 5 6 3 8 1 10
*/
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the total number of elemnts: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i=i+2){
		for(j=i+2;j<n;j=j+2){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			if(a[i+1]>a[j+1]){
				int temp=a[i+1];
				a[i+1]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
