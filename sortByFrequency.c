// ### Sort the given the array based on the frequency of each element in descending order
// Sample Case: Input: 1 2 1 3 3 3
// Output: 3 3 3 1 1 2


#include<stdio.h>
int main()
{
	int i,j,val,n,max,k,max_ind;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	int *freq;
	freq = (int*) calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		freq[val]++;
	}
	/*for(i=0;i<n;i++)
	{
		printf("%d\t",freq[i]);
	}*/
	for(i=0;i<50;i++)
	{
		max=freq[0];
		max_ind=0;
	for(j=0;j<=n-1;j++)
	{
		if(max<freq[j])
		{
			max=freq[j];
			max_ind=j;
		}
	}
	
	for(k=0;k<max;k++)
	{
		printf("%d ",max_ind);
	}
	freq[max_ind]=0;
   }
	
	return 0;
}
