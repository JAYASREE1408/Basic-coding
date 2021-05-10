//Minimum no of operation needed to make nums strictly increasing order

//Enter the number of elements in array!3
//Enter the array elements
//1
//1
//1
//3
//The increasing order of array!1 2 3

#include<stdio.h>
int main(){
    int i,n,j;
    printf("Enter the number of elements in array!");
    scanf("%d",&n);
    printf("Enter the array elements");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0,diff=0;
    for(i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            diff=a[i]-a[i+1];
            count=count+diff+1;
            a[i+1]=a[i+1]+diff+1;
        }
    }
    printf("%d\n",count);
    printf("The increasing order of array!");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
