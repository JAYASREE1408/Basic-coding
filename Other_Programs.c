//Swap Two numbers
//Using Third variable
// #include<stdio.h>
// int main(){
// 	int a,b,temp;
// 	scanf("%d%d",&a,&b);
// 	temp=a;
// 	a=b;
// 	b=temp;
// 	printf("After Swap:%d %d",a,b);
// }

//Without third variable
// #include<stdio.h>
// int main(){
// 	int a,b,sum;
// 	scanf("%d%d",&a,&b);
// 	sum=a+b;
// 	printf("After Swap:%d %d",sum-a,sum-b);
// }

//with xor
// #include<stdio.h>
// int main(){
// 	int a,b;
// 	scanf("%d%d",&a,&b);
// 	a=a^b;
// 	b=a^b;
// 	a=a^b;
// 	printf("After swap:%d %d",a,b);
// }

//Merge two arrays;
#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	int l=n+m;
	int c[l];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	int k=n;
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[m]);
		c[n]=b[i];
		n++;
	}
	
	for(i=0;i<l;i++)
	{
		printf("%d",c[i]);
	}
}