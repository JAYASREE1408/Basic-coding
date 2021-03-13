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
//with xor

// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
//     int i,j,n,count=0;
//     int temp,a=1,d=1;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     // for(i=0;i<n;i++){
//     //     if(arr[i]!=i+1){
//     //         count++;
//     //     }
//     // }
//     while(i<n){
//         if(a==1||d==1){
//         if(arr[i]<arr[i+1]){
//             d=0;
//             count=0;
//         }
//         if(arr[i]>arr[i+1]){
//             a=0;
//             count=n-1;
//         }
//     }
//     // else{
//     //     for(i=0;i<n;i++){
//     //         for(j=i+1;j<n;j++){
//     //             if(arr[i]>arr[j]){
//     //                 temp=arr[i];
//     //                 arr[i]=arr[j];
//     //                 arr[j]=temp;
//     //                 count++;
//     //             }
//     //         }
//     //     }
//     // }
//     // i++;
//     // }
// //    printf("%d",count-1); 
//     printf("%d",count);
//  }
// }

//Fibonacci series
// 1
// 1 1
// 1 1 2
// 1 1 2 3
// 1 1 2 3 5

#include<stdio.h>
int main(){
	int i,sum=1,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ",sum);
		sum=sum+i;
	}
}