#include<iostream>
//#include<stdio.h>
//#include<stdlib.h>
using namespace std;

#define size 5

/*struct queue{
	int arr[size];
	int front;
	int rear;
}s1;*/

class queue{
public:
	int arr[size];
	int front;
	int rear;
	void ins();
	void del();
	void disp();
}s1;

void queue::ins(){
//void ins(){
	int val;
	if(s1.rear == size-1){
		cout<<"\nQueue is Full!\n";
		return;	
	}
	cout<<"\nEnter the Value to Insert: ";
	cin>>val;
	if(s1.front == -1){
		s1.front = 0;	
	}
	s1.arr[++s1.rear] = val;
	cout<<"\nValue "<<val<<" Inserted Sucessfully\n";
}

void queue::del(){
//void del(){
	if(s1.front == s1.rear){
		s1.front = s1.rear = -1;
	}
	if(s1.front == -1){
		cout<<"\nQueue Is Empty!\n";
		return;	
	}
	s1.front++;
	cout<<"\nValue "<<s1.arr[s1.front-1]<<" Deleted Sucessfully\n";
}

void queue::disp(){
//void disp(){
	int i;	
	if(s1.front == -1){
		cout<<"\nQueue Is Empty!\n";
		return;	
	}
	cout<<"\nPrinting The Stored Values\n";
	for(i=s1.front;i<=s1.rear;i++){
		cout<<s1.arr[i]<<"\n";
	}
}

int main(){
	s1.rear = s1.front = -1;
	int ch;
	for(;;){
		cout<<"\nQueue Using Array\n1: Insert\n2: Delete\n3: Display\n4: Exit\nEnter Your Choice: ";
		cin>>ch;
		switch(ch){
			case 1: s1.ins();
					//ins();
					break;

			case 2: s1.del();
					//del();
					break;
	
			case 3: s1.disp();
					//disp();
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




















