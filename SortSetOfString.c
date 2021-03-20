// Sorting of a Set of Strings in Ascending alphabetical order:
// Enter the number of strings : 
// 5
// Enter Strings : 
// banana
// apple
// mango 
// strawberry
// pumpkin
// The Sorted Strings : 
// apple
// banana
// mango 
// pumpkin
// strawberry

#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   puts("Enter the number of strings : ");
   scanf("%d",&count);

   puts("Enter Strings : ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("The Sorted Strings : ");
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}