#include <stdio.h>
void push(void);
void pop(void);
void display(void);
void main(){
	int top=-1,choice,stack[100],item;
	int n;
	
	printf("Enter the size of the stack:");
	scanf("%d",&n);
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:push();
				break;
		case 2:pop();
				break;
		case 3:display();
				break;

	}
	void push(){
		if(top>=n-1){
			printf("Stack is overflow");
		}
		else{
			printf("Enter the item");
			scanf("%d",&item);
			stack[top++]=item;
		}
	}
	void pop(){
		if(top<=-1){
			printf("Stack is underflow");
		}
		else{
			printf("Element to be deleted is %d",stack[top]);
			top--;
		}
	}
	void display(){
		for(int i=top;i>=0;i--){
			printf("%d",stack[top]);
		}
	}

}