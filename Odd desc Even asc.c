/*
## Write a program to sort the elements in odd positions in descending order and elements in
ascending order
Eg 1: Input: 13,2 4,15,12,10,5
 Output: 13,2,12,10,5,15,4
Eg 2: Input: 1,2,3,4,5,6,7,8,9
 Output: 9,2,7,4,5,6,3,8,1


 */

 #include<stdio.h>
 int main(){
    int i,j,n,t,t1;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2){
        for(j=i+2;j<n;j=j+2){
            if(i%2==0){
                if(a[i]<a[j]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    }
    for(i=1;i<n;i=i+2){
        for(j=i+2;j<n;j=j+2){
            if(i%2!=0){
                if(a[i]>a[j]){
                    t1=a[i];
                    a[i]=a[j];
                    a[j]=t1;
                }
            }
        }
    }
    printf("The resultant array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

 }
