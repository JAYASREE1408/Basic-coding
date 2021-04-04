// Shuffle the given array {X1, X2, X3, Y1, Y2 , Y3} like : {X1, Y1, X2, Y2,  X3, Y3}
// Example input:
// Array : {2, 6, 7, 1, 8, 9}
// n = total length/ 2 

// Output: {2, 1, 6, 8, 7, 9}

// Example input 2:

// Array : { 1, 2, 3, 4, 5, 6, 7, 8}
// n = 4

// Output : {1, 5,  2, 6, 3, 7, 4, 8}

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    int b=n/2;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //swapping
    // for(i=0;i<b;i++){
    //     int t=a[i];
    //     a[i]=a[i+b];
    //     a[i+b]=t;
    // }
    int op[n],k=0;
    for(i=0;i<n;i++){
        op[k++]=a[i];
        op[k++]=a[i+b];
    }
    for(i=0;i<n;i++){
        printf("%d ",op[i]);
    }
}
