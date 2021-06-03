/*
You’re given an array. Print the elements of the array which are greater than its previous elements
in the array.
Input : 2, -3, -4, 5, 9, 7, 8 Output: 2 5 9
You should solve this question in O(n) time.
*/

#include<stdio.h>
int main()
{
	int i,n;

	scanf("%d",&n);

	int arr[n],m[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	m[0]=arr[0];
    int max=arr[0],k=1;
	for(i = 0;i<=n-1;i++)
	{
        if(arr[i]>max){
            max=arr[i];
            m[k++]=max;
        }

	}
	for(i=0;i<k;i++)
	{
		printf("%d ",m[i]);
	}
	return 0;
}
