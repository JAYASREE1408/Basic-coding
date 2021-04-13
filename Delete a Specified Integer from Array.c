#include<stdio.h>

int main(){
    int i,j,n,ele;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter an element to delete:");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ele==a[i]){
            for(j=i;j<n;j++){
                a[j]=a[j+1];
            }
            n--;
            i--;
        }

    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }



    }
