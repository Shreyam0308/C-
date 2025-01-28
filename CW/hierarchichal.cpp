#include<iostream>
#include<conio.h>
using namespace std;

class employee{
    protected:
        int eid;
        char name[50];
};

class manager : public employee{
    private:
        int numberOfteam;
    public:
        void scanData(){
            cout<<"Enter your employee id :- ";
            cin>>eid;
            cout<<"Enter your name :- ";
            cin>>name;
            cout<<"Enter your number Of team :- ";
            cin>>numberOfteam;
        }
        void dispData(){
            cout<<"\n"<<eid<<"\t"<<name<<"\t"<<numberOfteam;
        }
};

class developer : public employee{
    private:
        char programmingLanguage[50];
    public:
        void scanData(){
            cout<<"Enter your employee id :- ";
            cin>>eid;
            cout<<"Enter your name :- ";
            cin>>name;
            cout<<"Enter your Programmin Language :- ";
            cin>>programmingLanguage;
        }
        void dispData(){
            cout<<"\n"<<eid<<"\t"<<name<<"\t"<<programmingLanguage;
        }
};

int main(){
    developer d;
    manager m;
    int cas;
    cout<<"\nEnter 1 if manager\nEnter 2 if Developer\nEnter your choise :- ";
    cin>>cas;
    switch (cas)
    {
    case 1:
        m.scanData();
        m.dispData();
        break;
    case 2:
        d.scanData();
        d.dispData();
        break;
    default:
        cout<<"Enter valid Input.";
        break;
    }
    return 0;
}