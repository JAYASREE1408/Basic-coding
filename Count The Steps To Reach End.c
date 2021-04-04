// Given an array of integers where each element represents the max number of steps that can be made forward from that element. Write a function to return the minimum number of jumps to reach the end of the array 
// If the end isn’t reachable, return -1.

// Input: {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}

// Output: 3
// The path is  (1-> 3 -> 8 -> 9)

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0,i=0;
    while(i<n-1){
        count++;
        i=i+a[i];
    }
    printf("%d",count);
}
