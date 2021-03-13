#include<stdio.h>
int main(){
	int a[5],b[5],c[10];
	int i,j,temp;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		c[i]=a[i];
		c[5+i]=b[i];
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(c[i]<c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",c[i]);
	}
	

}