// Given an array nums of integers, return how many of them contain an even number of digits.

// Input: nums = [12,345,2,6,7896]
// Output: 2
// Explanation: 
// 12 contains 2 digits (even number of digits). 
// 345 contains 3 digits (odd number of digits). 
// 2 contains 1 digit (odd number of digits). 
// 6 contains 1 digit (odd number of digits). 
// 7896 contains 4 digits (even number of digits). 
// Therefore only 12 and 7896 contain an even number of digits.

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n],op=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int temp=a[i];
        int count=0;
        while(temp>0){
            count++;
            temp=temp/10;
        }
        if(count%2==0){
            op++;
        }
    }
    printf("%d elements are of even number of digits!",op);
    
}
