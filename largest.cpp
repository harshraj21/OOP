#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"Enter the Three Numbers\n";
	cin>>a>>b>>c;
	d=a>b?(a>c?a:c):(b>c?b:c);
	cout<<"The Largest was: "<<d;
}