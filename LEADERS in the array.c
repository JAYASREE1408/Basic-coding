//Write a program to print all the LEADERS in the array.
//An element is leader if it is greater than all the elements to its right side.
//And the rightmost element is always a leader.
//For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2.

//Enter the no of array elemnts: 6
//Enter the array elements: 16
//17
//4
//3
//5
//2
//The LEADERS in the array: 2 5 17

#include<stdio.h>
int main(){
    int i,j,n,max=0;
    printf("Enter the no of array elemnts: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The LEADERS in the array: ");
    for(i=n-1;i>0;i--){
        if(a[i]>max){
            printf("%d ",a[i]);
            max=a[i];
        }
    }
}

/*
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
    int max = INT_MIN;
    vector<int> ans;
    for(int i=n-1; i>=0; i--){
        if(max <= a[i]){
            max = a[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
    }
};
*/
