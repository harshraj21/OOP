#include<iostream>
#define max 10

using namespace std;

class stack {
	int element[max];
	int top;
public:
	void init();
	void push();
	void pop();
	void display();
};

void stack::init() {
	top = -1;
}

void stack::push() {
	if (top == max - 1) {
		cout << "WARNING: Stack OverFlow!\n";
		return;
	}
	cout << "Enter The Element: ";
	cin >> element[++top];
	cout << "Element Pushed Into The Stack.\n";
}

void stack::pop() {
	if (top == -1) {
		cout << "WARNING: Stack UnderFlow!\n";
		return;
	}
	cout << "Elements Popped From Stack.\n";
	element[top--];
}

void stack::display() {
	if (top == -1) {
		cout << "WARNING: Stack UnderFlow!\n";
		return;
	}
	for (int i = 0; i <= top; i++) {
		cout << element[i] << "\n";
	}
}

int main() {
	stack S1;
	S1.init();
	int choice;
	while (true) {
		cout << "\n\t\tStack Using C++ Classes\n\nOptions Available.\n1: Push Data\n2: Pop Data\n3: Display Data\n4: Exit\n\nEnter Your Choice: ";
		cin >> choice;
		switch (choice) {
		case 1: S1.push();
			break;
		case 2: S1.pop();
			break;
		case 3: cout << "Printing The Stored Values\n";
			S1.display();
			break;
		case 4: exit(0);
			break;
		default: cout << "Invalid Choice! Try Again.\n";
			break;
		}
	}
	return 0;
}
