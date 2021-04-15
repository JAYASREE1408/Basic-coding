/*Given sorted array check if two numbers sum in it is a given
value
Input
Array = {1 3 4 8 10 } N = 7
output
true
*/

#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int tar,flag=0;
    printf("Enter the target: ");
    scanf("%d",&tar);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]+a[j]==tar && i!=j){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("True");
    }
    else{
        printf("False");
    }
}

