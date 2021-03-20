#include<stdio.h>
int main(){
	int i,j,n,r,npr,ncr;
	 printf("Enter n and r: \n");
	scanf("%d %d",&n,&r);
	npr=fact(n)/fact(n-r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("nPr : %d\n",npr);
	printf("nCr : %d\n",ncr);
}
int fact(int n){
	int i,f=1;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
