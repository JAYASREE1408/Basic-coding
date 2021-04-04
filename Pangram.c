// program to check whether a String is a Pangram or not. A string is a Pangram if the string contains all the English alphabet letters.
// Sample input: "The quick brown fox jumps over a lazy dog".
// Output : true

// Sample input: "The quick brown fox jumps".
// output : false

#include<stdio.h>
int main(){
    int i,j,n;
    char s[100];
    int op[26];
    for(i=0;i<26;i++){
        op[i]=0;
    }
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for(n=0;s[n]!='\0';n++);
    for(i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            op[s[i]-'a']=1;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            op[s[i]-'A']=1;
        }
    }
    for(i=0;i<26;i++){
        if(op[i]==0){
            printf("The given string is not a Pangram!");
            exit(1);
        }
    }
    printf("The given string is a Pangram!");
}
