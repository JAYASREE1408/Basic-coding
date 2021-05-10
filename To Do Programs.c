[7:55 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*integer contains only 6 and 9, we have to change only one number
 which is larger than the previous
eg. 6696
op: 6996 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int num=9669;
    int t=num;
    int sixidx=-1;
    while(t>0)
    {
        if(t%10==6)
            sixidx=i;
        t=t/10;
        i++;
    }
    if(sixidx!=-1)
        printf("%.lf",num+3*pow(10,sixidx));
    else
        printf("%d",num);
    return 0;
}
[7:56 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*
              G
            GR
          GRA
       GRAM
     GRAMP
   GRAMPR
GRAMPRO    */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter a string:");
    gets(a);
    int i,j,k,len,prev;
    int space[]={2,2,3};
    len=strlen(a);
    prev=2*len;
    for(i=0;i<len;i++)
    {
        for(j=0;j<prev;j++)
            printf(" ");
        prev=prev-space[i%3];
        for(k=0;k<=i;k++)
            printf("%c",a[(k+len/2)%len]);
        printf("\n");
    }

}
[7:56 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the
following conditions
1. 5 if a perfect square
2. 4 if multiple of 4 and divisible by 6
3. 3 if even number
And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,square_value;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    int a[n],sum[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum[i]=0;
    }
    for(i=0;i<n;i++)
    {
        square_value=sqrt(a[i]);
        if(square_value * square_value == a[i])
            sum[i]+=5;
        if(a[i]%4==0 && a[i]%6==0)
            sum[i]+=4;
        if(a[i]%2==0)
            sum[i]+=3;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sum[i]>=sum[j])
            {
                sum[i]=sum[i]^sum[j];
                sum[j]=sum[j]^sum[i];
                sum[i]=sum[i]^sum[j];
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("<%d,%d> ",a[i],sum[i]);
}
[7:57 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: //Check whether the num is pow of 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool ispowerofThree(int n)
{
    double result= log10(n)/log10(3);
    return result ==(int)result;
}
int main()
{
    int n,x;
    printf("Enter the number:");
    scanf("%d",&n);
    ispowerofThree(n)? printf("True"): printf("False");
    return 0;
}
[7:58 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /* Check whether a given mathematical expression is valid..
 eg. Input: (a+b)(a*b)
     output: valid
     Input; (ab)(ab+)
     output: Invalid...
     */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[50];
    gets(a);
    int count=0,count1=0;
    int i,j,res;
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]=='(')
            count++;
        if(a[i]==')')
            count1++;
        if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='%')
        {
            if(a[i-1]>='a' && a[i-1]<='z' && a[i+1]>='a' && a[i+1]<='z')
                res=1;
        }
        i++;
    }
    if(count==count1 && res==1)
        printf("valid");
    else
        printf("Invalid");
}
[7:58 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: // find the continuous max no.of characters in a string eg. ip: deena op: 2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    int res=1,i=0;
    while(str[i]!=0)
    {
        int j=i+1;
        int count=1;
        while(str[i]==str[j])
        {
            count++;
            j++;
            i++;
        }
        if(res<count)
            res=count;
        i++;
    }
    printf("%d",res);
}
[7:59 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: #include <iostream>

using namespace std;

int main()
{
    int n=5,i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            if(i+j==n-1 || i+j==2*n-2)
                cout<<"*";
            else if((i==0 && i+j>=n-1) || (i==n-1 && i+j<=2*n-2))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<< endl;
    }
}
[7:59 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*4 4 4 4 4 4 4
  4 3 3 3 3 3 4
  4 3 2 2 2 3 4
  4 3 2 1 2 3 4
  4 3 2 2 2 3 4
  4 3 3 3 3 3 4
  4 4 4 4 4 4 4   */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,len;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    len=2*n-1;
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            int min=i<j?i:j;
            min=min < len-i ? min: len-i-1;
            min=min < len-j-1 ? min : len-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
}
[8:00 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /* ip: PROGRAM
         G
        GR
       GRA
      GRAM
     GRAMP
    GRAMPR
   GRAMPRO   */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    printf("Enter the string:");
    gets(str);
    int i=0,j,k;
    while(i<strlen(str)/2)
        i++;
    int count=i;

    for(j=0;j<strlen(str);j++)
    {
       count=i;
        for(k=0;k<strlen(str);k++)
        {
            if(j+k>=strlen(str)-1)
                {
                    if(count<strlen(str))
                       printf("%c",str[count++]);
                    else
                    {
                        count=0;
                        printf("%c",str[count++]);
                    }
                }
            else
                printf(" ");
        }
        printf("\n");
    }
}
[8:00 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find starting and end position of the first sub-array whose addition is equal to given sum
#include<stdio.h>
int main()
{
 int arr[100],n,i,sum1,j,sum=0;
 printf("enter the no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter array elements of +ve integer:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("enter the value of sum:\n");
scanf("%d",&sum1);
printf("the given array:\n");
for(i=0;i<n;i++)
   printf("%d ",arr[i]);
for(i=0;i<n;i++)
{
  sum+=arr[i];
  for(j=i+1;j<n;j++)
  {
     sum+=arr[j];
     if(sum==sum1)
     {
       printf("\nThe sub array start and end index whose addition equals given sum is %d and %d",i+1,j+1);
       break;
     }
  }
  if(sum==sum1)
      break;
  sum=0;
}
if(sum==0)
    printf("there is no sub array whose addition equals the sum\n");
 return 0;
}
[8:00 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /* ip: {1,2,3,4,5,6,7,8} k=3
op: [3,2,1,6,5,4,8,7} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the k value:");
    scanf("%d",&k);
    reverse(arr,n,k);
    printf("Output array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int n,int k)
{
    int count=0,i,j;
    while(count<n)
    {
        i=count;
        j=i+k-1;
        if(j>=n)
            j=n-1;
        while(i<j)
        {
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[j]^arr[i];
            arr[i]=arr[i]^arr[j];
            i++;
            j--;
        }
        count+=k;
    }
}
[8:01 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search
for substring like “too” in the two dimensional string both from left to right and from top to bottom.
W E L C O
M E T O Z
O H O C O
R P O R A
T I O n
And print the start and ending index as
Start index : <1,2>
End index: <3, 2>  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[5][5]={'W','E','L','C','O','M','E','T','O','Z','O','H','O','C','O','R','P','O','R','A','T','I','O','N'};
    char b[10];
    int x,i,j,flag=0;
    printf("WELCOMETOZOHOCORPORATION\n");
    printf("Enter the substring to search for the above string:");
    gets(b);
    for(i=0;i<5;i++)
    {
        int k=0;
        for(j=0;j<5;j++)
        {
            if(a[i][j]==b[0])
            {…
[8:01 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to rearrange array with +ve nd -ve no. to be have all -ve no. first followed by +ve no. without using xtra space(order not matters)
#include<stdio.h>
int main()
{
 int temp,i,j,n,arr[100];
 printf("enter the no. of elements in array\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
 for(i=0;i<n-1;i++)
 {
   if(arr[i]>=0)
   {
     for(j=i+1;j<n;j++)
     {
       if(arr[j]<0)
       {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         break;
       }
    }
   }
 }
 for(i=0;i<n;i++)
    printf("%d,",arr[i]);
return 0;
}
[8:01 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: 
#include <stdio.h>
#include <stdlib.h>
int sumofDigits( );
int main()
{
    int n,res,i;
    printf("Enter the number:");
    scanf("%d",&n);
    res=sumofDigits(n);
    if(res>=10)
        res=sumofDigits(res);
    printf("%d ",res);
}
int sumofDigits(int n)
{
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n/=10;
    }
    return sum;
}
[8:01 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: INTERVIEW-programs/sum of all digits until get one digit number.c
[8:02 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to print size of longest substring that has k unique characters
#include<stdio.h>
int main()
{
 char str[100];
 int i,j,count,l,flag,m,k,n;
 int max=0;
 scanf("%[^\n]%*c",str);
 scanf("%d",&k);
 for(l=0;str[l]!='\0';l++);
 for(i=0;i<=l-k;i++)
 {
   for(m=i+k-1;m<l;m++)
   {
    count=0;
    j=i;
    while(j<m)
    {
      flag=0;
       for(n=j+1;n<=m;n++)
       {
         if(str[j]==str[n])
         {
            flag=1;
            break;
         }
       }
       j++;
       if(flag==0)
            count++;
    }
     if(count+1==k&&m-i+1>max)
        max=m-i+1;
   }
}
if(max!=0)
       printf("%d",max);
else
  printf("-1");
 return 0;
}
[8:03 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find the missing integer in array[given:only one integer 'll be missing in array which has no duplicates array has n-1 integers each range from 1 to n]
#include<stdio.h>
int main()
{
 int arr[100],i,j,n,ini,flag;
 printf("enter n such that array has n-1 integers:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n-1;i++)
   scanf("%d",&arr[i]);
 ini=n;
 while(1)
 {
  flag=0;
  for(i=0;i<n-1;i++)
  {
    if(arr[i]==ini)
    {
       flag=1;
       break;
    }
  }
  if(flag==0)
  {
   printf("the missing int is %d",ini);
   break;
  }
  ini--;
}
return 0;
}
[8:03 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find repeated element in array which has n+1 integer and each ranges from 1 to n(only one element is repeated)
#include<stdio.h>
int main()
{
 int arr[100],i,n,j,sum=0,sum1=0;
 printf("enter the n value such that array has n+1 value:\n");
 scanf("%d",&n);
 printf("enter array elements:\n");
 for(i=0;i<=n;i++)
    scanf("%d",&arr[i]);
 for (i=0,j=1;i<=n;i++,j++)
 {
   sum+=arr[i];
   sum1+=j;
 }
 i=sum1-sum;
 sum=n+1-i;
 printf("the repeated element is %d",sum);
 return 0;
}
[8:04 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find longest palindromic substring in string
#include<stdio.h>
int main()
{
 char str[100];
 int i,j,max[2],l,flag,m,mid,k;
 max[0]=1;
 scanf("%[^\n]%*c",str);
 for(l=0;str[l]!='\0';l++);
 for(i=0;i<l-1;i++)
 {
   for(m=i+1;m<l;m++)
   {
    mid=(i+m)/2;
    j=i;
    k=m;
    flag=0;
    while(j<=mid)
    {
     if(str[j]!=str[k])
    {
        flag=1;
        break;
     }
     j++;
     k--;
    }
    if(flag==0&&max[0]<m-i+1)
    {
      max[0]=m-i+1;
      max[1]=i;
    }
   }
}
if(max[0]!=1)
{
 for(i=max[1];i<max[1]+max[0];i++)
       printf("%c",str[i]);
}
else
  printf("%c",str[0]);
 return 0;
}
[8:04 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /Contact management system/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct contact
{
  char name[100],email[100],mobile_no[100];
}user[100],temp;
void add_contact();
void delete_contact();
void edit_contact();
void search();
void display();
void validate_contact_details();
int i=0,j=0,k;
char temp_name[100];
void add_contact()
{
  printf("Enter name: ");
  scanf("%s",&user[i].name);
  printf("Enter mobile number: ");
  scanf("%s",&user[i].mobile_no);
  printf("Enter email: ");
  scanf("%s",&user[i].email);
  validate_contact_details();
  i++;
}
void validate_contact_details()
{
  char temp_email[100],temp_mobile[100];
  int l=0,m=0,flag;
  j=0;
  /-----------name validation-----------/
  strcpy(temp_name,user[i].name);
  while(j<=i)
  {
    if((!(strcmp(temp_name,user[j].name)))&& i!=j)
    {
      printf("The name already exits in contacts,enter some other name..\n\n");
      main();
    }
    /----------------------mobile number validation------------------/
    strcpy(temp_mobile,user[i].mobile_no);
    if(i==j)
    {
      while(l<=i)
      {
        if((!(strcmp(temp_mobile,user[l].mobile_no)))&& i!=l)
        {
          printf("The mobile number already exits!!!\n\n");
          main();
        }
        if(strlen(temp_mobile)>12)
        {
          printf("Please enter valid mobile number..\n\n");
          main();
        } 
        if(l==i)
        {
          if((strlen(temp_mobile)==11 && temp_mobile[0]=='0')||(strlen(temp_mobile)==10 && temp_mobile[0]!='0')||(strlen(temp_mobile)==12 && (temp_mobile[0]=='9' && temp_mobile[1]=='1')))
          {
            k=0;
            while(temp_mobile[k]!='\0')
            {
              if(!(temp_mobile[k]>='0' && temp_mobile[k]<='9'))
                break;
              k++;
            }
            if(k!=strlen(temp_mobile))
            {
              printf("Please enter valid mobile number...\n\n");
              main();
            }
          }
          else
          {
            printf("Please enter valid mobile number...\n\n");
            main();
          }
        }
        l++;
      }
      /------------------email validation--------------------/
      strcpy(temp_email,user[i].email);
      k=0;
      while(k<=i)
      {
        if(strlen(temp_email)<5)
        {
          printf("Please enter valid email id...\n\n");
          main();
        }
        if((!(strcmp(temp_email,user[k].email))) && i!=k)
        {
          printf("The email id already exits,enter some other email address..\n\n");
          main();
        }
        k++;
      }
      if(i==k-1)
      {
        flag=0;
        while(temp_email[m]!='\0')
        {
          if(!(temp_email[m]>='A' && temp_email[m]<='Z'))
          {
            if(temp_email[m]=='@' && m>2 && (temp_email[m+1]>='a' && temp_email[m+1]<='z'))
              flag++;
            else if(temp_email[m]=='.' && (temp_email[m-1]>='a' && temp_email[m-1]<='z')&& (temp_email[m+1]>='a' && temp_email[m+1]<='z'))
              flag++;
          }
          else
          {
            printf("Please enter valid email with small letters..\n\n");
            main();
          }
          m++;
        }
        if(flag!=2 && m==strlen(temp_email))
        {
          printf("Please enter valid email..\n\n");
          main();
        }
        else
          printf("Contact added successfully!!!\n");
      }
    
    }
    j++;
  }
}
void delete_contact()
{
  printf("Enter the name of the contact to be deleted: ");
  scanf("%s",&temp_name);
  for(k=0;k<i;k++)
  {
    if(!(strcmp(temp_name,user[k].name)))
    {
      strcpy(user[k].name,"NULL");
      strcpy(user[k].mobile_no,"NULL");
      strcpy(user[k].email,"NULL");
      printf("Contact deleted successfully!!\n");
      break;
    }
  }
  if(i==k)
  {
    printf("The contact doesn't exists....\n");
  }
}
void edit_contact()
{
  printf("Enter name of contact to edit: ");
  scanf("%s",&temp_name);
  for(k=0;k<i;k++)
  {
    if(!(strcmp(temp_name,user[k].name)))
    {
      printf("\n-----Edit the %s contact:-----\n",user[k].name);
      printf("Enter name: ");
      scanf("%s",&user[k].name);
      printf("Enter mobile number: ");
      scanf("%s",&user[k].mobile_no);
      printf("Enter email: ");
      scanf("%s",&user[k].email); 
      break;
    }
  }
  if(k==i)
    printf("The contact doesn't exits....\n");
}
void search()
{
  printf("Enter name: ");
  scanf("%s",&temp_name);
  for(k=0;k<i;k++)
  {
    if(!(strcmp(temp_name,user[k].name)))
    {
      printf("\n------Contact details of %s------\n",user[k].name);
      printf("Name: %s\nMobile number: %s\nEmail Id: %s\n",user[k].name,user[k].mobile_no,user[k].email);
      break;
    }
  }
  if(k==i)
  {
    printf("The contact doesn't exits....\n");
  }
}
void sort()
{
  int k,l;
  for(k=0;k<i-1;k++)
  {
    for(l=k+1;l<i;l++)
    {
      if(strcmp(user[k].name,user[l].name)> 0)
      {
        temp=user[k];
        user[k]=user[l];
        user[l]=temp;
      }
    }
  }
}
void display()
{
  sort();
  printf("\n-------CONTACTS LIST-------\n\n");
  for(j=0;j<i;j++)
  {
    if((strcmp(user[j].name,"NULL")))
      printf("Name: %s\nMobile number: %s\nEmail Id: %s\n\n",user[j].name,user[j].mobile_no,user[j].email);
  }
  if(i==0)
  {
    printf("No contacts saved...\n");
  }
}
int main()
{
  int choice;
  printf("\tCONTACT MANAGEMENT\n");
  while(1)
  {
    printf("\n1.Add a contact\n2.Delete a contact\n3.Edit contact\n4.Search a contact\n5.Display contacts\n6.exit\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    printf("\n");
    switch(choice)
    {   
      case 1: 
      {
        add_contact();
        break;
      }
      case 2:
      {
        delete_contact();
        break;    
      }
      case 3:
      {
        edit_contact();
        break;    
      }
      case 4:
      {
        search();
        break;
      }
      case 5:
      {
        display();
        break;
      }
      case 6:
      {
        exit(1);
        break;
      }
      default:
      {
        printf("Invalid choice");
        break;
      }
    }
  }
  return 0;
}
[8:04 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find if there is subarray(of size atleast 1) with sum 0
#include<stdio.h>
int main()
{
 int i,j,n,arr[100],sum;
 printf("enter the no. of elements in array:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
 for(i=0;i<n;i++)
 {
   sum=0;
   for(j=i;j<n;j++)
   {
    sum+=arr[j];
    if(sum==0)
    {
      printf("true\nFrom %d to %d",i,j);
      break;
    }
   }
   if(sum==0)
      break;
 }
 if(sum!=0)
     printf("false\n");
 return 0;
 }
[8:05 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct login_signup
{
	char username[100],email[100],dob[100];
	char mobile_no[100],pwd[100],retype_pwd[100],mob[100];
}user[100];
void sign_up();
void login();
void validate_username();
void validate_email();
void validate_password();
void validate_retype_password();
void validate_mobile_no();
void validate_dob();
int login_validate();
int i=0,k;
char temp_name[100],temp_email[100],temp_pwd[100],temp_repwd[100],lname[100],lpwd[100],temp_mob[100],temp_dob[100];
void login()
{
	printf("\tLOGIN\n");
	printf("Enter username: ");
	scanf("%s",&lname);
	printf("Enter password: ");
	scanf("%s",&lpwd);
	login_validate();
}
int login_validate()
{
	int k=0;
	while(k<=i)
	{
		if(!(strcmp(lname,user[k].username)))
…
[8:05 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //to find all elements in array that appears more than n/k times
#include<stdio.h>
int main()
{
 int i,n,k,j,arr[100],count,flag,l=0;
 printf("enter the no. of elements;\n");
 scanf("%d",&n);
 printf("enter the value of k:\n");
 scanf("%d",&k);
 if(k>n)
    printf("operation not possible\n");
 else
 {
  printf("enter the array elements:\n");
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
  {
    count=1;
    flag=0;
    for(j=i-1;j>=0;j--)
    {
      if(arr[i]==arr[j])
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
       continue;
    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
          count++;
    }
    if(count>n/k)
    {
        l=1;
       printf("%d ",arr[i]);
    }
  }
 }
 if(l==0)
     printf("there is no such element that is more than n/k times");
 return 0;
}
[8:05 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //stock buy sell to maximize profit(can buy and sell for many times if profit occurs)
#include<stdio.h>
int maximumprofit(int prices[],int n)
{
  int i,j,profit=0,sum=0,flag;
  for(i=0;i<n-1;i++)
  {
    flag=0;
    for(j=i+1;j<n;j++)
    {
      if(prices[j]<prices[i])
      {
        i=j-1;
        break;
      }
      if(prices[j]-prices[i]>profit)
      {
            flag=1;
            profit=prices[j]-prices[i];
      }
    }
    if(flag==1)
       sum+=profit;
  }
  return sum;
}
int main()
{
 int n,i,max;
 printf("enter no. of days in array:\n");
 scanf("%d",&n);
 int prices[n];
 printf("enter cost of stock on each day:\n");
 for(i=0;i<n;i++)
   scanf("%d",&prices[i]);
 if(max=maximumprofit(prices,n))
     printf("the max profit is %d",max);
 else
   printf("profit can't be earned\n");
  return 0;
}
[8:06 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //reverse every subarray formed by k consecutive elements in array
#include<stdio.h>
int main()
{
  int temp,k,n,i,j,arr[100],l;
  printf("enter the no. of elements in array:\n");
  scanf("%d",&n);
  printf("enter the k value that is no. of elements in subarray:\n");
  scanf("%d",&k);
  if(k>n)
    printf("operation not possible\n");
  else
  {
   printf("enter array elements:\n");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   for(i=0;i<n;i=i+k)
   {
    l=i+k-1;
    if(l>=n)
        l=n-1;//if not want to reverse segment which has lessthan k,then use break;here
     for(j=i;j<l;j++)//here instead of l,i+(k/2) can also be used
     {
       temp=arr[j];
       arr[j]=arr[l];
       arr[l]=temp;
       l--;
     }
   }
   printf("the answer:\n");
   for(i=0;i<n;i++)
     printf("%d ",arr[i]);
  }
  return 0;
}
[8:06 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //remove duplicates in string with xtra space
#include<stdio.h>
int main()
{
 char str[100],str1[100];
 int i,j,flag,l=0;
 printf("enter a string:\n");
 scanf("%[^\n]%*c",str);
 for(i=0;str[i]!='\0';i++)
 {
   flag=0;
  for(j=i-1;j>=0;j--)
  {
    if(str[i]==str[j])
    {
      flag=1;
      break;
    }
  }
    if(flag==0)
    {
      str1[l]=str[i];
      l++;
    }
 }
 str1[l]='\0';
 for(i=0;i<=l;i++)
    str[i]=str1[i];

 printf("%s",str);
 return 0;
}
[8:06 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: ## Given and array. Print all the elements which are occuring more than n/k times.
Sample Case: Input [3,1,2,2,1,2,3,3] k = 4
Output [2,3]





#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,max = 0,n,k,*freq,*arr;
	
	printf("Enter the total no of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr + i);
		if(max < arr[i])
			max = arr[i];
	}
	
	freq = (int*)calloc(max+1,sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	printf("Enter the element k:");
	scanf("%d",&k);
	
	printf("[");
	for(i = 0;i<max+1;i++)
	{
		freq[i] > (n/k) ? printf("%d ",i) : 0;
	}
	printf("]");
	free(arr);
	free(freq);
	return 0;
}
[8:07 PM, 5/8/2021] J😘y😍nthi Sissy ♥️: //own atoi implementation(difference from build in atoi is that if the strings contain other than no.(except space at first and followed by no.) at any place,return -1  )
#include<stdio.h>
int atoi(char str[]);
int main()
{
 char str[100];
 scanf("%[^\n]%*c",str);
 printf("%d",atoi(str));
 return 0;
}
int atoi(char str[])
{
 int res=0,i=0,sign=1;
 while(str[i]==' ')
    i++;
 if(str[i]=='-'||str[i]=='+')
    sign=1-2*(str[i++]=='-');
 while(str[i]>='0'&&str[i]<='9')
     res=res*10+(str[i++]-'0');
  res=res*sign;
 if(str[i]!='\0'||str[i-1]==' ')
    return -1;
 return res;
}
[8:07 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: (26 sloc)  415 Bytes
## Print the pattern
Sample Case: Input 5
Output
	555555555
	544444445
	543333345
	543222345
	543212345
	543222345
	543333345
	544444445
	555555555

#include<stdio.h>
int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<(2 * n)-1;i++)
	{
		for(j=0;j<(2 * n)-1;j++)
		{
			printf("%d",(abs(n - i - 1)> abs(n - j -1) ? abs(n - i - 1) :abs(n - j -1) )+ 1);
		}
		printf("\n");
	}
	
}
[8:14 PM, 5/8/2021] JäÝåŚřÉê 👸🏼: /*integer contains only 6 and 9, we have to change only one number
 which is larger than the previous
eg. 6696
op: 6996 */ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int num=9669;
    int t=num;
    int sixidx=-1;
    while(t>0)
    {
        if(t%10==6)
            sixidx=i;
        t=t/10;
        i++;
    }
    if(sixidx!=-1)
        printf("%.lf",num+3*pow(10,sixidx));
    else
        printf("%d",num);
    return 0;
}