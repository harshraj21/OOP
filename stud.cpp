#include<iostream>
#define max 10
using namespace std;

class student{
    int id;
    string usn,name;
    float marks1,marks2,marks3,avg;
public:
    void create(int i);
    void calculate();
    void display();
    float worst();
    float ret();
    string nam();
};

void student::create(int i){
    id = ++i;
    cout<<endl<<"Student Name: ";
    cin>>name;
    cout<<"Student USN: ";
    cin>>usn;
    cout<<"Marks 1: ";
    cin>>marks1;
    cout<<"Marks 2: ";
    cin>>marks2;
    cout<<"Marks 3: ";
    cin>>marks3;
}

float student::worst(){
    float a,b,c;
    a = marks1;
    b = marks2;
    c = marks3;
    return a<b?(a<c?a:c):(b<c?b:c);
}

void student::calculate(){
    float best = (marks1+marks2+marks3) - worst();
    avg = best/2;
}

void student::display(){
    cout<<endl<<"Student ID: "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student Marks 1: "<<marks1<<endl;
    cout<<"Student Marks 2: "<<marks2<<endl;
    cout<<"Student Marks 3: "<<marks3<<endl;
    cout<<"Student Average: "<<avg<<endl;
}

float student::ret(){
    return avg;
}

string student::nam(){
    return name;
}

int main(){
    student s1[max],*p;
    int n,flag;
    float tmp = 0.0;
    string name;
    cout<<"Enter The No Of Students: ";
    cin>>n;
    for(int i=0;i<n;i++){
        p = &s1[i];
        p->create(i);
        p->calculate();
        if(tmp < p->ret()){
            tmp = p->ret();
            name = p->nam();
        }
    }
    cout<<"\nWish To Print The Data\n1: Yes\n2: No\nEnter Your Choice: "<<endl;
    cin>>flag;
    if(flag == 1){
        for(int i=0;i<n;i++){
            p = &s1[i];
            p->display();
        }
    }
    cout<<"\nTopper is: "<<name;
    cout<<"\nWith Avg: "<<tmp<<endl;
    return 0;
}
