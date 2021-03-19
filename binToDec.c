#include<stdio.h>
#include <math.h>
int main(){
	int i=0,x,n,res=0;
	scanf("%d",&n);
	while(n!=0){
		x=n%10;
		res=res+(x*pow(2,i));
		n=n/10;
		i++;
		
	}
	printf("%d",res);
}

