//Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.
//Example:
//
//Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
//Output: 12, 3, 9
//Explanation: There is a triplet (12, 3 and 9) present
//in the array whose sum is 24.

//Enter the no of array elemnts: 6
//Enter the array elements: 12
//3
//4
//1
//6
//9
//Enter the sum: 24
//The triplets are 12 3 9

#include<stdio.h>
int main(){
    int i,j,k,n,sum;
    printf("Enter the no of array elemnts: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==sum){
                    printf("The triplets are %d %d %d",a[i],a[j],a[k]);
                }
            }
        }
    }


}
