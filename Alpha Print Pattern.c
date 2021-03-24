
#include<stdio.h>
int main(){
	int i,j,n;
	char alp='A';
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c ",alp);
		}
		alp++;
		printf("\n");
	}
}

Enter the last alphabet: F
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 

#include<stdio.h>
int main(){
	int i,j;
	char n;
	char alp='A';
	printf("Enter the last alphabet: ");
	scanf("%c",&n);
	for(i=1;i<=(n-'A'+1);i++){
		for(j=1;j<=i;j++){
			printf("%c ",alp);
		}
		alp++;
		printf("\n");
	}
}
