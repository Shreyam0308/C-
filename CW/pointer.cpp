#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class student{
    protected:
    char name[40];
    int id,std;

    public:
    void scan(){
        cout<<"Enter your ID :- ";
        cin>>id;
        cout<<"Enter your Name :- ";
        cin>>name;
        cout<<"Enter your Standard :- ";
        cin>>std;
    }
    void disp(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<std;
    }
};

int main(){
    student s,*p;
    p = &s;
    p->scan();
    p->disp();
    return 0;
}