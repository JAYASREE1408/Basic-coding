/* Enter the number of elements: 6
      *
     * *
    *   *
   *     *
  *       *
 ***********
*/
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number of elements: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf(" ");
		}
		for(int z=1;z<=(2*i-1);z++){
			if(z==1 || i==n ||  z==(2*i-1)){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}

 
