//Enter the number of elements in array!9
//Enter the array elements:1
//2
//3
//4
//5
//6
//7
//8
//9
//Enter the k:3
//3       2       1       6       5       4       9       8       7

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of elements in array!");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the k:");
    scanf("%d",&k);
    for(i=0;i<n;i=i+k){
        int l,h;
        l=i,h=i+k-1;
        while(l<h){
            int temp=a[l];
            a[l]=a[h];
            a[h]=temp;
            l++;
            h--;
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
