//Given a string, find the second most frequent character in it.

//Example:
//Input: str = "aabababa";
//Output: Second most frequent character is 'b'

//Enter the string: aabababa
//The second most frequent character is: b

//Enter the string: geeksforgeeks
//The second most frequent character is: g

//Enter the string: abcd
//The second most frequent character is:

#include<stdio.h>
int main(){
    int i,j,k,count[255]={0};
    int first=0,second=0;
    char s[20];
    printf("Enter the string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        count[s[i]]++;
    }
    for(i=0;i<255;i++){

        if(count[i]>count[first]){
            second=first;
            first=i;
        }
        else if(count[i]>count[second] && count[i]<count[first]){
            second=i;
        }
    }
    printf("The second most frequent character is: %c",second);

}

