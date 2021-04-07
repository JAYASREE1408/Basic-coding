/* 
Given a word, you need to judge whether the usage of capitals in it is as follows.

   All letters in this word are capitals, like "USA". (Or)
  All letters in this word are not capitals, like "hello". (Or)
   Only the first letter in this word is capital, like "Google".
 
Input: GooGle
Op: False
*/

#include <stdio.h>

int main()
{
    int n,i,j,k,count=0;
    char s[50];
    printf("Enter the string!");
    scanf("%[^\n]",s);
    for(n=0;s[n]!='\0';n++);
    for(i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            for(j=0;s[j]>='A' && s[j]<='Z';j++){
                count++;
            }
            if(count==n){
                printf("True");
                exit(1);
            }
            else if(count==1){
                if(s[0]>='A' && s[0]<='Z'){
                    printf("True");
                    exit(1);
                }
            }
            else{
                printf("False");
                exit(1);
            }
        }
        else{
            count=0;
            for(j=0;s[j]>='a' && s[j]<='z';j++){
            count++;
            }
            if(count==n){
                printf("True");
                exit(1);
                }
            else{
                printf("False");
                exit(1);
            }
        }
    }
    printf("False");
}
