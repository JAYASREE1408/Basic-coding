#include <stdio.h>
int main(){
	int rem,dec;
	scanf("%d",&dec);
	int binary[50];
	int i=0;
	while(dec>0){
		rem=dec%2;
		binary[i]=rem;
		i++;
		dec=dec/2;
	}
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
	
}