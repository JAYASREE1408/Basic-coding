// 1.Swap numbers without using temp 
// 2.Add the digits of a number and display.
// 3.Reversing a number
// 4.Get a number and display its Multiplication table
// 5.Sort the array 
// Array: {0, 1, 1, 1, 0, 0, 1, 1}
// In time complexity O(n)
// 6.Get a number 'sum' and array as input from tha user and find the number of pairs of integers in the array whose sum is equal to 'sum'.
// Sample input : arr[] = {1, 5, 7, -1}, sum = 6 Output : 2 Pairs with sum 6 are (1, 5) and (7, -1)


// 1
// #include<stdio.h>
// int main(){
// 	int a,b;
// 	scanf("%d %d",&a,&b);
// 	// a=a+b;
// 	// b=a-b;
// 	// a=a-b;
// 	// a=a*b;
// 	// b=a/b;
// 	// a=a/b;
// 	a=a^b;
// 	b=a^b;
// 	a=a^b;
// 	printf("%d %d",a,b);
// }

//2
// #include<stdio.h>
// int main(){
// 	long int n,count=0,rem=0,sum=0;
// 	scanf("%ld",&n);
// 	while(n>0){
// 		rem=n%10;
// 		sum=sum+rem;
// 		n=n/10;
// 		count++;
// 	}
// 	printf("No. of digits are: %ld\n",count);
// 	printf("The sum is: %ld\n",sum);
// }

//3
// #include<stdio.h>
// int main(){
// 	int n,rem,res=0;
// 	scanf("%d",&n);
// 	while(n>0){
// 		rem=n%10;
// 		res=(res*10)+rem;
// 		n=n/10;
// 	}
// 	printf("%d",res);
// }

//4
// #include<stdio.h>
// int main(){
// 	int n,i,res;
// 	scanf("%d",&n);
// 	for(i=1;i<=10;i++){
// 		res=i*n;
// 		printf("%d * %d = %d\n",i,n,res);
// 	}
	
// }

//5
#include<stdio.h>
void main()
{
	int a[20],n,l,h,m,i,t;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements 0s and 1s");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=0;
	m=0;
	h=n-1;
	while(h>m)
	{
		if(a[m]==0)
		{
			t=a[m];
			a[m]=a[l];
			a[l]=t;
			m++;
			l++;
		}
		else if(a[m]==1)
		{
			t=a[m];
			a[m]=a[h];
			a[h]=t;
			h--;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	
	
}

// #include<stdio.h>
// int main()
// {
//     int i,j,n,temp;
//     printf("Enter no of Elements:");
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     i=0,j=n-1;
//     while(i<j)
//     {
//         while(a[i]==0)
//             i++;
//         while(a[j]==1)
//             j--;
//         if(i<j)
//         {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//             i++; 
//             j--;
//         }
//     }
//     for(i=0;i<n;i++)
//         printf("%d ",a[i]);
//     printf("\n");
// return 0;
// }

//6
// #include <stdio.h>
// #include<stdlib.h>
// int main(){
// 	int n,sum,i,j,count=0;
// 	scanf("%d %d",&n,&sum);
// 	int *a;
// 	a=(int*)malloc(n*sizeof(int));
// 	for(i=0;i<n;i++){
// 		scanf("%d",&a[i]);
// 	}
// 	for(i=0;i<n;i++){
// 		for(j=i+1;j<n;j++){
// 			if(a[i]+a[j]==sum){
// 				printf("The pair is %d and %d\n",a[i],a[j]);
// 				count++;
// 			}
// 		}
// 	}
// 	printf("The count is %d\n",count);
// }