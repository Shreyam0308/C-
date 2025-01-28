#include<iostream>
#include<conio.h>
using namespace std;

class employee{
    private:
        int id;
        char name[50];
        int salary;
    
    public:
        void scanData(){
            cout<<"Enter Your Id :- ";
            cin>>id;
            cout<<"Enter Your Name :- ";
            cin>>name;
            cout<<"Enter Your Salary :- ";
            cin>>salary;
        }
        void disp(){
            cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary;
        }
};

int main(){
    employee e;
    
    e.scanData();
    e.disp();
}