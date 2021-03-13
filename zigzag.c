#include<stdio.h>
int main(){
	int n=3,j,sum=0;
	int a[n][n];
	for (int i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 1; i == 1; i++)
	{
		for(j=1;j<=n;j++){
			sum=sum+a[i][j];
		}
	}
	for (int i = n; i == n; i++)
	{
		for(j=1;j<=n;j++){
			sum=sum+a[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for(j=1;j<=n;j++){
			if(i==j && i>1 && i<n){
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d\n",sum );
}