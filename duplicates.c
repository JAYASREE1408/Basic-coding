/*count the duplicates of the array..
ip: [2,1,3,2,2,5,8,9,8]
op: 2->3
    1->1
    3->1
    5->1
    8->2
    9->1
    */
#include<stdio.h>
int main(){
	int i,j,n,count=1;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; ++i)
	{
		count=1;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&& i!=j){
				count++;
				for(int z=j;z<n-1;z++){
					a[z]=a[z+1];
				}
				n--;
				j--;
			}
		}
		printf("%d -> %d \n",a[i],count);

	}
}