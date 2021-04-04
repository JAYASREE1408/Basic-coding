//* 
//**
//***
/*#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
*/
 
//     *
//   **
// ***


// #include<stdio.h>
// int main(){
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)
// 	{
// 		for(j=1;j<=n-i;j++)
// 		{
// 			printf(" ");
// 		}
// 		for(int k=1;k<=i;k++)
// 		printf("*");
// 		printf("\n");
// 	}
// }

// ***
// **
// *
// #include<stdio.h>
// int main(){
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=n-i+1;j++){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// }

// ***
//  **
//   *

// #include<stdio.h>
// int main(){
// 	int i,j,k,n;
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++){
// 		for(j=1;j<=i;j++){
// 			printf(" ");
// 		}
// 		for(k=n;k>=i+1;k--){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}

// }

//  *
// * *
//* * *
// #include<stdio.h>
// int main(){
// 	int n,i,j,k;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)
// 	{
// 		for(k=i;k<=n-1;k++)
// 		{
// 			printf(" ");
// 		}
// 		for(j=1;j<=i;j++)
// 		{
// 			printf("* ");
// 		}
// 		printf("\n");
// 	}
// }

// * * *
//  * *
//   *
// #include<stdio.h>
//   int main(){
//   	int n,i,j,k;
//   	scanf("%d",&n);
//   	for(i=1;i<=n;i++)
//   	{
//   		for(k=n-1;k<=i;k++)
//   		{
//   			printf(" ");
//   		}
//   		for(j=n;j>=i;j--)
//   		{
//   			printf("* ");
//   		}
//   		printf("\n");
//   	}
//   }

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// #include<stdio.h>
// int main(){
// 	int t1=0,t2=1,t3,n,i,j;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		t1=0;
// 		t2=1;
// 		printf("%d ",t2);
// 		for(j=1;j<=i;j++){
// 			t3=t1+t2;
// 			printf("%d ",t3);
// 			t1=t2;
// 			t2=t3;
// 		}
// 		printf("\n");
// 	}
// }

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 4 4 1
// 1 5 5 5 5 1  Pascal triangle
// #include<stdio.h>
// int main(){
// 	int i,j,n;
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++){
// 		for(j=1;j<=;j++){

// 		}
// 	}
// }  //Incomplete

//zig zag sum of matrix
// #include<stdio.h>
// int main(){
// 	int n,i,j,sum=0;
// 	int a[3][3];
// 	for(i=0;i<3;i++){
// 		for(j=0;j<3;j++){
// 			scanf("%d",&a[i][j]);
// 		}
// 	}
	
// 			sum=(a[0][0]+a[0][1]+a[0][2])+a[1][1]+(a[2][0]+a[2][1]+a[2][2]);
		
// 	printf("Sum is:%d",sum);
// }

//   1 
//  121 
// 12321 
//1234321
#include<stdio.h>
int main(){
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		for(l=i-1;l>=1;l--){
			printf("%d",l);
		}
		printf("\n");
	}
}
