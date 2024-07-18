#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Student{
    private:
        int rn;
        char name[50];
        int std;
    
    public:
        Student(){
            cout<<"\nStart of Default Constructor--------------------->"<<this;
            cout<<"\n------------------------------------";
            rn = 1;
            strcpy(name,"Shreyam");
            std = 12;
            cout<<"\n------------------------------------";
            cout<<"\nEnd of Default Constructor";
        }

        Student(int r,char og[],int st){
            cout<<"\nStart of Perameterised Constructor--------------------->"<<this;
            cout<<"\n------------------------------------";
            rn = r;
            strcpy(name,og);
            std = st;
            cout<<"\n------------------------------------";
            cout<<"\nEnd of Perameterised Constructor";
        }

        Student(Student &s){
            cout<<"\nStart of Copy Constructor--------------------->"<<this;
            cout<<"\n------------------------------------";
            rn = s.rn;
            strcpy(name,s.name);
            std = s.std;
            cout<<"\n------------------------------------";
            cout<<"\nEnd of Copy Constructor";
        }

        void scan(){
            cout<<"Enter your roll number :- ";
            cin>>rn;
            cout<<"Enter your name :- ";
            cin>>name;
            cout<<"Enter your standard :- ";
            cin>>std;
        }
        ~Student(){
            cout<<"\n Destructor called"<<this;
        }

        void display(){
            cout<<"\n"<<rn<<"\t"<<name<<"\t"<<std<<"------------------->"<<this;
        }
};

int main(){
    Student s2(2, "Dev", 12),s1;
    s1.display();
    s2.display();
    Student s3(s2);
    s3.display();
}