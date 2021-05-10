/*Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

Example 1:

Input:
str = 123
Output: 123

Example 2:

Input:
str = 21a
Output: -1
Explanation: Output is -1 as all
characters are not digit only.
*/

//Enter the string:1234
//1234

//Enter the string:21a
//-1

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,ans=0;
    char s[20];
    printf("Enter the string:");
    scanf("%[^\n]",&s);
    for(i=0;i<strlen(s);i++){
        if(s[i]<='9' && s[i]>='0')
            ans=ans*10+s[i]-'0';
        else
        {
            printf("-1");
            exit(1);
        }

    }
    printf("%d",ans);


}
