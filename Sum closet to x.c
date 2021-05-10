/*
//Given a sorted array and a number x, find a pair in array whose sum is closest to x.
//Examples:
//
//Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
//Output: 22 and 30
//
//Input: arr[] = {1, 3, 4, 7, 10}, x = 15
//Output: 4 and 10
//
//Expected Time complexity:O(n)


Enter the no of array elements: 6
Enter the array elements: 10
22
28
29
30
40
Enter the value of x: 54
The closest numbers are 22 and 3


#include<stdio.h>
int main(){
    int i,j,n,x,closest=100,num1,num2;
    printf("Enter the no of array elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])<x){
                if((x-a[i]+a[j])<closest)
                    closest=x-a[i]+a[j];
                    num1=a[i];
                    num2=a[j];
            }
//            else if((a[i]+a[j])>x){
//                if((a[i]+a[j]-x)<closest)
//                    closest=a[i]+a[j]-x;
//                    num1=a[i];
//                    num2=a[j];
//            }
        }

    }
    printf("The closest numbers are %d and %d",num1,num2);



}
*/


#include<stdio.h>
int main(){
    int res_l, res_r,n,i,x;  // To store indexes of result pair
    printf("Enter the no of array elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);
    // Initialize left and right indexes and difference between
    // pair sum and x
    int l = 0, r = n-1, diff = 100;

    // While there are elements between l and r
    while (r > l)
    {
       // Check if this pair is closer than the closest pair so far
       if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }

       // If this pair has more sum, move to smaller values.
       if (arr[l] + arr[r] > x)
           r--;
       else // Move to larger values
           l++;
    }

    printf("The closest pair is %d and %d",arr[res_l] ,arr[res_r]);
}
