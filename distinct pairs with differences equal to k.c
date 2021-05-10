//Given an integer array and a positive integer k, count all distinct pairs with differences equal to k.
//Examples:
//
//Input: arr[] = {1, 5, 3, 4, 2}, k = 3
//Output: 2
//There are 2 pairs with difference 3, the pairs are {1, 4} and {5, 2}


#include<stdio.h>
int main(){
    int i,j,k,n,diff,count=0;
    printf("Enter the no of array elemnts: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the difference: ");
    scanf("%d",&diff);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==diff){
                count++;
            }
        }
    }
    printf("There are %d pairs with difference %d",count,diff);

}
