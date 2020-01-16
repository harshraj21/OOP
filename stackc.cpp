#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
using namespace std;

#define size 5

/*struct stack{
	int arr[size];
	int top;
}s1;*/

class stack{
public:
	int arr[size];
	int top;
	void push();
	void pop();
	void display();
}s1;

void stack::push(){
//void push(){
	int val;
	if(s1.top == size-1){
		//printf("\nStack Overflow!\n");
		cout<<"\nStack Overflow!\n";
		return;	
	}
	//printf("\nEnter the Value to Push: ");
	cout<<"\nEnter the Value to Push: ";
	//scanf("%d",&val);
	cin>>val;
	s1.top++;
	s1.arr[s1.top] = val;
	//printf("\nValue %d Pushed Sucessfully\n",val);
	cout<<"\nValue "<<val<<" Pushed Sucessfully\n";
}

void stack::pop(){
//void pop(){
	if(s1.top == -1){
		//printf("\nStack Underflow!\n");
		cout<<"\nStack Underflow!\n";
		return;	
	}
	s1.top--;
	//printf("\nValue %d Popped Sucessfully\n",s1.arr[s1.top+1]);
	cout<<"\nValue "<<s1.arr[s1.top+1]<<" Popped Sucessfully\n";
}

void stack::display(){
//void display(){
	int i;	
	if(s1.top == -1){
		//printf("\nStack Underflow!\n");
		cout<<"\nStack Underflow!\n";
		return;	
	}
	//printf("\nPrinting The Stored Values\n");
	cout<<"\nPrinting The Stored Values\n";
	for(i=0;i<=s1.top;i++){
		//printf("%d\n",s1.arr[i]);
		cout<<s1.arr[i]<<"\n";
	}
}

int main(){
	s1.top = -1;
	int ch;
	for(;;){
		//printf("\nStack Using Stuctured Array\n1: Push\n2: Pop\n3: Display\n4: Exit\nEnter Your Choice: ");
		cout<<"\nStack Using Stuctured Array\n1: Push\n2: Pop\n3: Display\n4: Exit\nEnter Your Choice: ";
		//scanf("%d",&ch);
		cin>>ch;
		switch(ch){
			case 1: s1.push();
					//push();
					break;

			case 2: s1.pop();
					//pop();
					break;
	
			case 3: s1.display();
					//display();
					break;

			case 4: exit(1);
					break;

			default: //printf("\nInvalid Choice!!\n");
					cout<<"\nInvalid Choice!!\n";
					break;		
		}
	}	
	return 0;
}




















