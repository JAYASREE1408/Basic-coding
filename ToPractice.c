//Check if two strings are anagrams of each other.....
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50],b[50];
    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    int x[26]={0},y[26]={0},count=0;
    int i=0;
    while(a[i]!='\0')
    {
        x[a[i]-'a']++;
        y[b[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(x[i]!=y[i])
        {
            count++;
        }
    }
    if(count!=0)
        printf("the strings are not anagrams...");
    else
        printf("The strings are anagrams...");
}
\
[10:10, 3/23/2021] my lub💖 Jessi: //Given an array A, divide it into two arrays  say B and C, such that the sum of elements in array B is greater than or equal
// to the sum of elements in array c and array B should have min no. of elements...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int leftsum=0,rightsum=0,count=0;
    for(i=0;i<n;i++)
    {
        leftsum+=a[i];
        rightsum=0;
        count=0;
        for(j=i+1;j<n;j++)
        {
            rightsum+=a[j];
            count++;
        }
        if(leftsum>=rightsum)
        {
            if(count>i)
            {
                break;
            }
            else
            {
                printf("Division is not possible");
                return;
            }
        }
    }
    printf("The array of B is:\n");
    for(j=0;j<n;j++)
    {
        if(j==i+1)
            printf("\nThe array of C is:\n");
        printf("%d ",a[j]);
    }
}
[10:11, 3/23/2021] my lub💖 Jessi: //Circular rotation of array by k positions...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,k;
    printf("Enter the array elements:");
    scanf("%d",&n);
    printf("Enter the no. of elements in array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of rotation:");
    scanf("%d",&k);
    printf("The array after rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[(n+i-k)%n]);
    }

}
[10:13, 3/23/2021] my lub💖 Jessi: //count the word 'the' in the string
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[100];
    int i,j,count=0,t,h,e,space;
    printf("Enter the string: ");
    gets(a);
    while(a[i]!='\0')
        i++;
    for(j=0;j<=i-3;j++)
    {
        t=(a[j]=='t' || a[j]=='T');
        h=(a[j+1]=='h' || a[j+1]=='H');
        e=(a[j+2]=='e' || a[j+2]=='E');
        space=(a[j+3]==' ' || a[j+3]=='\0');
        if((t&& h && e && space)==1)
            count++;
    }
    printf("The occurrence of the word 'the' is %d",count);

}
[10:14, 3/23/2021] my lub💖 Jessi: //Min occurring characters in a string 
#include <stdio.h>
#include <stdlib.h>
#define max 225

int main()
{
    char a[50];
    int freq[max],i,ascii,min;
    printf("Enter the string:");
    gets(a);
    for(i=0;i<max;i++)  // 50 indicates the frequency range...
        freq[i]=0;
    i=0;
    while(a[i]!='\0')
    {
        ascii=(int)a[i];
        freq[ascii]+=1;
        i++;
    }
    min=0;
    i=0;
    while(i<max)
    {
        if(freq[i]!=0)
        {
            if(freq[min]==0 || freq[i]<freq[min])
                min=i;
        }
        i++;
    }
    printf("Minimum occurring characters in the string is %c : %d", min,freq[min]);

}
[10:15, 3/23/2021] my lub💖 Jessi: //program to reverse the order of the words in a string...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i;
    printf("Enter the string:");
    gets(a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
            a[i]='\0';
            printf("%s ",&(a[i])+1);
        }
    }
    printf("%s",a);
}
[10:18, 3/23/2021] my lub💖 Jessi: //Queue using array
#include<stdio.h>
 #define max 50
int queue[50];
int front=-1;
int rear=-1;
void enqueue()
{
    int data;
    printf("enter the element to be inserted");
    scanf("%d",&data);
    if(rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        if(front==-1&&rear==-1)
        {
          front=rear=0;
          queue[rear]=data;
        }
        else
        {
            rear=rear+1;
            queue[rear]=data;
        }

    }
}
void dequeue()
{
    if(front==-1&& rear==-1)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted element:%d\n",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1&& rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void main()
{

    int choice;
    while(1)
    {
        printf("\n1.enqueue 2.dequeue 3.display 4.quit\n");
        printf("\nenter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
        }
    }
}
[10:26, 3/23/2021] my lub💖 Jessi: //sort elements by frequency in array
#include<stdio.h>
int main()
{
int arr[100],arr1[100],n,i,j,k=0,count=1,count1[100],l=0;
printf("enter no. of elements:");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
count=0;
printf("the frequency sorting of given array:\n");
for(i=n;i>0;i--)
{
 for(j=0;j<n;j++)
 {
  if(count1[j]==i)
    {
          for(l=0;l<j;l++)
          {
              if(arr[j]==arr[l])
                 count++;
          }
          if(count==0)
            {
                for(l=j;l<n;l++)
                {
                   if(arr[j]==arr[l])
                   {
                       arr1[k]=arr[j];
                        k++;
                   }
                }
            }
            count=0;
      }

 }
}
 for(i=0;i<k;i++)
 printf("%d ",arr1[i]);
return  0;
}
[10:27, 3/23/2021] my lub💖 Jessi: //to print recent  min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100];
char arr[100];
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
j=1;
printf("the recent min occurrence character:");
for(i=1;i<=n;i++)
{
    for(j=n;j>=0;j--)
    if(count1[j]==i)
    {
      printf("%c",arr[j]);
      exit(1);
    }
}
return 0;
}
[10:28, 3/23/2021] my lub💖 Jessi: //to print min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100],k=0,l,flag1=0;
char arr[100],arr1[100];
arr1[k]='\0';
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
count=0;
printf("the min occurrence characters:");
for(i=1;i<=n;i++)
{
    for(j=0;j<n;j++)
    {
    if(count1[j]==i)
    {
      count++;
      if(arr1[k]=='\0')
      {
        arr1[k]=arr[j];
        k++;
      }
      else
      {
          for(l=0;l<k;l++)
          {
              if(arr1[l]==arr[j])
                  flag1++;
         }
         if(flag1==0)
              {
                arr1[k]=arr[j];
                 k++;
              }
          flag1=0;
      }

    }
    }
    if(count!=0)
      break;
}
for(i=0;i<k;i++)
 printf("%c ",arr1[i]);
return 0;
}


//to print recent  min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100];
char arr[100];
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
j=1;
printf("the recent min occurrence character:");
for(i=1;i<=n;i++)
{
    for(j=n;j>=0;j--)
    if(count1[j]==i)
    {
      printf("%c",arr[j]);
      exit(1);
    }
}
return 0;
}
//to print min char in string
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,count=1,count1[100],k=0,l,flag1=0;
char arr[100],arr1[100];
arr1[k]='\0';
printf("enter the string:\n");
scanf("%[^\n]%*c",arr);
for(n=0;arr[n]!='\0';n++);
 for(i=0;arr[i]!='\0';i++)
{
 for(j=0;arr[j]!='\0';j++)
 {
  if(arr[i]==arr[j]&&j!=i)
  {
   count++;
  }
 }
  count1[i]=count;
  count=1;
}
count=0;
printf("the min occurrence characters:");
for(i=1;i<=n;i++)
{
    for(j=0;j<n;j++)
    {
    if(count1[j]==i)
    {
      count++;
      if(arr1[k]=='\0')
      {
        arr1[k]=arr[j];
        k++;
      }
      else
      {
          for(l=0;l<k;l++)
          {
              if(arr1[l]==arr[j])
                  flag1++;
         }
         if(flag1==0)
            …
/*Alternate sorting: Given an array of integers, rearrange the array in such a way that the
first element is first max and sec element is first min.
eg. i/p: {1,2,3,4,5,6,7}, o/p:{7,1,6,2,5,3,4} */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements in sorted order:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int small=0,large=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
            printf("%d ",a[small++]);
        else
            printf("%d ",a[large--]);
    }

}
/*count the duplicates of the array..
ip: [2,1,3,2,2,5,8,9,8]
op: 2->3
    1->1
    3->1
    5->1
    8->2
    9->1
    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],v[50],count,i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        v[i]=0;
    }
    for(i=0;i<n;i++)
    {
            count=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    v[j]=-1;
                }
            }
        if(v[i]!=-1 )
        {
            v[i]=count;
        }
    }
    printf("The duplicate elements are:\n");
        for(i=0; i<n; i++)
            {

            if(v[i]!= -1)
            {
                    printf("%d->%d\n", a[i], v[i]);

            }
            }
}
//find the square no.s between the ranges.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j;
    printf("Enter the ranges to print square numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The perfect square between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        for(j=1;j*j<=i;j++)
        {
            if(j*j==i)
            {
                printf("%d ",j*j);
            }
        }

    }
}
/*Find the union,intersection of two list and also find except(Remove even elements
from list 1 and odd elements from list 2)
i/p: list 1: 1,3,4,5,6,8,9
list 2: 1,5,8,9,2
union: 1,3,4,5,6,8,9,2
intersection: 1,5,8,9
except: 1,3,5,9,8,2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],b[50],m,n,i,j;   // ENTER THE ARRAY ELEMENTS IN SORTED ORDER....
    printf("Enter the no. of elements in array1:");
    scanf("%d",&m);
    printf("Enter the array 1 elements:\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of elements in array2:");
    scanf("%d",&n);
    printf("Enter the array 2 elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("The intersection of two arrays:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else if(a[i]==b[j])
        {
            printf("%d ",b[j]);
            i++;
            j++;
        }
    }
    printf("\nThe union of two arrays:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
            printf("%d ",b[j++]);
        else if(a[i]<b[j])
            printf("%d ",a[i++]);
        else if(a[i]==b[j])
        {
            printf("%d ",b[j]);
            i++;
            j++;
        }
    }
    while(i<m)
        printf("%d ",a[i++]);
    while(j<n)
        printf("%d ",b[j++]);
    printf("\nThe except of array 1 and arary 2 :\n");
    i=0,j=0;
    while(i<m)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
        i++;
    }
    while(j<n)
    {
        if(b[j]%2==0)
            printf("%d ",b[j]);
        j++;
    }
}
//merge two arrays without duplicates
#include <stdio.h>
#include <stdlib.h>

int main()
{
      int a[50],b[50],m,n,i,j;   // ENTER THE ARRAY ELEMENTS IN SORTED ORDER....
    printf("Enter the no. of elements in array1:");
    scanf("%d",&m);
    printf("Enter the array 1 elements:\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of elements in array2:");
    scanf("%d",&n);
    printf("Enter the array 2 elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    int count[100]={0},max=0;
    for(i=0;i<m;i++)
    {
        count[a[i]]++;
        if(max<a[i])
            max=a[i];
    }
    for(j=0;j<n;j++)
    {
        count[b[j]]++;
        if(max<b[j])
            max=b[j];
    }
    printf("The output array without duplicates:\n");
    for(i=0;i<=max;i++)
    {
        if(count[i]!=0)
            printf("%d ",i);
    }

}
//print odd numbers btw range.c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("Enter the range to print odd numbers:\n");
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
}
/* To find the factors of the numbers given in an array and to sort the numbers in descending order
according to the factors present in it.
input: 8,2,3,12,16 o/p: 12,16,8,2,3 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],t[50],i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int flag=0;
        for(j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
                flag++;
        }
        t[i]=flag;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(t[i]>t[j])
            {
                t[i]=t[i]^t[j];
                t[j]=t[j]^t[i];
                t[i]=t[j]^t[i];
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[j]^a[i];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
// Given two numbers n,m find a number closest to n and divisible by m Note : n should not be the prime number
#include<stdio.h>
int main()
{
  int n,m,count=0,i;
  printf("enter n and m");
  scanf("%d %d",&n,&m);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    {
      count=1;
      break;
    }
  }
  if(count==0)
  {
    printf("n should not be prime number");
  }
  else
  {
  for(i=n-3;i<n+3;i++)
  {
    if(i%m==0)
    {
      printf("%d",i);
      break;
  }
  }
}
  return 0;
  
}
//division without operator
#include<stdio.h>
void main()
{
  int a,b,q=0,sign;
  float result;
  printf("enter numbers");
  scanf("%d %d",&a,&b);
  if((a<0)^(b<0))
  {
    sign=-1;
  }
  else
  {
    sign=1;
  }
  a=abs(a);
  b=abs(b);
  while(a>=b)
  {
    a=a-b;
    q++;
  }
  printf("Quotient is:%d",sign*q);  
  
  
}
//Even max length word
#include<stdio.h>
#include<string.h>
void main()
{
  char str[50],res[50];
  int i,j,len,count=0,ind,max=0;
  printf("enter string");
  gets(str);
  len=strlen(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=' ')
    {
      count++;
    }
    else
    {
      if(count>max)
      {
        if(count%2==0)
        {
          max=count;
          ind=i-max;
        }
      }   
      count=0;  
    }
  }
  if(count>max)
  {
    if(count%2==0)
    {
      max=count;
      ind=len-max;
    }
  }
  j=0;
  for(i=ind;i<ind+max;i++)
  {
    res[j]=str[i];
    j++;
  }
  printf("Even maximum length word:%s",res);
}
//Duplicate elements
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int i,n,a[50],j,len;
  printf("enter no. of elements");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
    printf("Duplicate elements are:");
    for(i=0;i<n;i++)
  {    
        for(j=i+1;j<n;j++)
    {    
            if(a[i]==a[j])   
                printf("%d", a[j]);    
        }    
    }      
}
//Factors sorted array
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int n,a[10],b[10],i,j,k,max,ind,t,t1,f;
  printf("enter no. of elements");
  scanf("%d",&n);
  printf("enter elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=1;j<=a[i];j++)
    {
      if(a[i]%j==0)
      {
        f++;
      }
    }
    b[i]=f;
    f=0;
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(b[i]<b[j])
      {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
        t1=a[i];
        a[i]=a[j];
        a[j]=t1;
      }
      else if(b[i]==b[j])
      {
        if(a[i]>a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
  }
  printf("Factor sorted array:");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
/*Implement a function that accepts two integers arrays 'arr1' and 'arr2' of sizes n and m respectively as its argument to find and return the sum of all uncommon elements in two arrays(elements which are present in only one of the array). 
Return -1 if both arrays are null. 
If one of the arrays is null then return the sum of all elements of the other array.*/

#include<stdio.h>
int SumOfElements(int arr1[], int arr2[],int n,int m)
{
  int i=0,j=0,sum=0,count;
  if(m==0 && n==0)
    return -1;
  if(n==0)
  {
    for(i=0;i<m;i++)
    {
      sum=sum+arr2[i];
  }
  return sum;
  }
  for(i=0;i<n;i++)
  {
  count=0;
  for(j=0;j<m;j++)
  {
    if(arr1[i]==arr2[j])
       break;
    else
      count++;
  }
  if(count==m)
    sum=sum+arr1[i];
 }  
 return(sum);
}
int main()
{
  int arr1[50],arr2[50],n,m,i,res;
  printf("enter no of elements of first and second array: ");
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&arr2[i]);
  }
 res=SumOfElements(arr1,arr2,n,m);
 printf("The sum is %d",res);
  return 0;
}
/**
 * C program to find maximum occurring character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }


    /* Finds maximum frequency */
    max = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }


    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);

    return 0;
}