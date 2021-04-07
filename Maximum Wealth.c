/* 
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
*/

#include <stdio.h>

int main()
{
    int n,i,j,k;
    int a[3][2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=0;
    for(i=0;i<3;i++){
        int count=0;
        for(j=0;j<2;j++){
            count=count+a[i][j];
        }
        if(max<count){
            max=count;
        }
    }
    printf("The max wealth is %d",max);
    return 0;
}
