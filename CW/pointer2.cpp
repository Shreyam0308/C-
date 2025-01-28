#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class student{
    private:
    int id,std;
    char name[50];
    public:
    void ScanData(){
        cout<<"Enter your id :- ";
        cin>>id;
        cout<<"Enter your name :- ";
        cin>>name;
        cout<<"Enter your standard :- ";
        cin>>std;
    }
    void DispData(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<std;
    }

};

int main(){
    int i;
    student s[5],*ptr;
    ptr = &s[0];
    for(i = 1; i <= 5; i++){
        ptr->ScanData();
        ptr++;
    }
    ptr = &s[0];
    for(i = 1; i <= 5; i++){
        ptr->DispData();
        ptr++;
    }
}