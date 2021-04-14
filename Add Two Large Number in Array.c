/*
Enter the number of elements in n1 and n2:12
9
Enter the two arrays:9 2 8 1 3 5 6 7 3 1 1 6
7 8 4 6 2 1 9 9 7
The addition of the two array is: 9 2 8 9 2 0 2 9 5 1 1 3
*/
#include<stdio.h>
int main(){
    int i,j,lar,small,s1,l1,l3,n1,n2,tens=0,sum;
    printf("Enter the number of elements in n1 and n2:");
    scanf("%d %d",&n1,&n2);
    int a1[n1],a2[n2];
    printf("Enter the two arrays:");
    for(i=0;i<n1;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n2;i++){
        scanf("%d",&a2[i]);
    }
    if(n1>=n2){
        lar=n1;
        small=n2;
    }
    else{
        lar=n2;
        small=n1;
    }
    int a3[lar+1];
    s1=small-1;
    l1=lar-1;
    l3=lar;

    while(s1>=0){
        sum=0;
        if(n1==lar){
            sum=a1[l1]+a2[s1]+tens;
        }
        else{
           sum=a2[l1]+a1[s1]+tens;
        }
        a3[l3]=sum%10;
        tens=(sum/10);
        l3--;
        s1--;
        l1--;
    }

    if(n1==n2){
        a3[l3]=tens;
    }

    while(l1>=0){
        if(n1==lar){
            a3[l3]=a1[l1]+tens;
        }
        else{
            a3[l3]=a2[l1]+tens;
        }
        l1--;
        l3--;
        tens=0;
    }
    if(n1!=n2){
        a3[l3]=0;
    }

    if(a3[l3]==0){
        for(i=0;i<lar;i++){
            a3[i]=a3[i+1];
        }
        lar--;
    }
    printf("The addition of the two array is: ");
    for(i=0;i<=lar;i++){
        printf("%d ",a3[i]);
    }
}
