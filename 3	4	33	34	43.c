/*
Enter the nth number to print the series: 1000
3	4	33	34	43	44	333	334	343	344	433	434	443	444
*/
#include<stdio.h>
int main(){
	int t,n;
	printf("Enter the nth number to print the series: \n");
	scanf("%d",&n);
	t=1;
	while(t<n){
		int temp=t;
		int flag=1;
		while(temp>10){
			int a=temp%10;
			temp=temp/10;
			if(a!=3&& a!=4){
				flag=0;
			}
		}
		if((temp==3 || temp==4) && flag==1){
			printf("%d\t",t );
		}
		t++;
	}
}
