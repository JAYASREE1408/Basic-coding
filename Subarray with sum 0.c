//Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.
//
//Example 1:
//
//Input:
//5
//4 2 -3 1 6
//
//Output:
//Yes
//
//Explanation:
//2, -3, 1 is the subarray
//with sum 0.


#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int sum=0;
        for(j=i;j<n;j++){
            sum=sum+a[j];
            if(sum==0){
                printf("True!");
                exit(1);
            }
        }
    }
    printf("False!");
}

or

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int a[], int n)
    {
        unordered_map<int,bool> summap;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+a[i];
            if(sum==0 || summap[sum]==true){
                return true;
            }
            summap[sum]=true;
        }
        return false;
}
};
