/*You’re given a number n. If write all the numbers from 1 to n in a paper, we have to find the
number of characters written on the paper.For example if n=13, the output should be 18 if n = 101,
the output should be 195
*/
#include<stdio.h>
int main(){
    int i,j,n,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=i;
        while(j!=0){
            count++;
            j=j/10;
        }
    }
    printf("%d",count);
}

