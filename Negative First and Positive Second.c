//Enter the number of elements in array!9
//Enter the array elements!-12
//11
//-13
//-5
//6
//-7
//5
//-3
//-6
//-12 -6 -13 -5 -3 -7 5 6 11

#include<stdio.h>
int main(){
    int l,m,h,i,j,n;
    printf("Enter the number of elements in array!");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements!");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]<0){
            int temp=a[l];
            a[l]=a[m];
            a[m]=temp;
            l++;
            m++;
        }
        else if(a[m]>0){
            int temp=a[l];
            a[l]=a[h];
            a[h]=temp;
            h--;
        }

    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
