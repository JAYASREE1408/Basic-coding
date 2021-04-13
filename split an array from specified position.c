/*C program to split an array from specified position and add first part to the end.
Ex:
7 6 2 9
Pos: 3
Op: 9 7 6 2*/

#include<stdio.h>
int main(){
    int i,j,n,pos,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        temp=a[pos];
        for(j=pos;j>=0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
