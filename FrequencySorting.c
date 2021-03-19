#include<stdio.h>
#include <stdlib.h>
int main(){
	int i,n,j,k,max,index;
	scanf("%d",&n);
	// int *freq=(int*) calloc(n,sizeof(int));
	// int *a=malloc(n*sizeof(int));
	int a[n],freq[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		freq[a[i]]++;
	}
	for(i=0;i<n;i++){
		max=freq[0];
		index=0;
		for(j=0;j<=14;j++){
			if(freq[j]>max){
				max=freq[j];
				index=j;
			}
		}
		for(k=0;k<max;k++){
			printf("%d ",index);
		}
		freq[index]=0;

	}
}

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int n,a[30],max,ind,i,j,k;
// 	int* freq;
// 	printf("enter no. of elements");
// 	scanf("%d",&n);
// 	freq=(int*) calloc(n,sizeof(int));
// 	printf("enter elements");
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&a[i]);
// 		freq[a[i]]++;
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		max=freq[0];
// 		ind=0;
// 		for(j=0;j<n-1;j++)
// 		{
// 			if(max<freq[j])
// 			{
// 				max=freq[j];
// 				ind=j;
// 			}
// 		}
// 		for(k=0;k<max;k++)
// 		{
// 			printf("%d",ind);
// 		}
// 		freq[ind]=0;
// 	}
// 	return 0;

	
// }


// ### Sort the given the array based on the frequency of each element in descending order
// Sample Case: Input: 1 2 1 3 3 3
// Output: 3 3 3 1 1 2


// #include<stdio.h>
// int main()
// {
// 	int i,j,val,n,max,k,max_ind;
// 	printf("Enter the total number of elements:");
// 	scanf("%d",&n);
// 	int *freq;
// 	freq = (int*) calloc(n,sizeof(int));
// 	for(i=0;i<n;i++)
// 	{
// 		scanf("%d",&val);
// 		freq[val]++;
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		printf("%d\t",freq[i]);
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		max=freq[0];
// 		max_ind=0;
// 	for(j=0;j<=n;j++)
// 	{
// 		if(max<freq[j])
// 		{
// 			max=freq[j];
// 			max_ind=j;
// 		}
// 	}
	
// 	for(k=0;k<max;k++)
// 	{
// 		printf("%d ",max_ind);
// 	}
// 	freq[max_ind]=0;
//    }
	
// 	return 0;
// }
