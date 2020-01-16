#include<stdio.h>
#include<stdlib.h>

#define size 5

struct stack{
	int arr[size];
	int top;
}s1;

void push(){
	int val;
	if(s1.top == size-1){
		printf("\nStack Overflow!\n");
		return;	
	}
	printf("\nEnter the Value to Push: ");
	scanf("%d",&val);
	s1.top++;
	s1.arr[s1.top] = val;
	printf("\nValue %d Pushed Sucessfully\n",val);
}

void pop(){
	if(s1.top == -1){
		printf("\nStack Underflow!\n");
		return;	
	}
	s1.top--;
	printf("\nValue %d Popped Sucessfully\n",s1.arr[s1.top+1]);
}

void display(){
	int i;	
	if(s1.top == -1){
		printf("\nStack Underflow!\n");
		return;	
	}
	printf("\nPrinting The Stored Values\n");
	for(i=0;i<=s1.top;i++){
		printf("%d\n",s1.arr[i]);
	}
}

void main(){
	s1.top = -1;
	int ch;
	for(;;){
		printf("\nStack Using Stuctured Array\n1: Push\n2: Pop\n3: Display\n4: Exit\nEnter Your Choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: push();
					break;

			case 2: pop();
					break;
	
			case 3: display();
					break;

			case 4: exit(1);
					break;

			default: printf("\nInvalid Choice!!\n");
					break;		
		}
	}	
}




















