#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class product{
    private:
    int id,stock;
    char name[50];
    public:
    void ScanData(){
        cout<<"Enter product id :- ";
        cin>>id;
        cout<<"Enter product name :- ";
        cin>>name;
        cout<<"Enter product stock size :- ";
        cin>>stock;
    }
    void DispData(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<stock;
    }

};

int main(){
    int i;
    product p[5],*ptr;
    ptr = &p[0];
    for(i = 1; i <= 5; i++){
        ptr->ScanData();
        ptr++;
    }
    ptr = &p[0];
    for(i = 1; i <= 5; i++){
        ptr->DispData();
        ptr++;
    }
}