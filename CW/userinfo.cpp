#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class user{
    public:
    char username[50],email[50];
};
class customer : public user{
    public:
    int customerid;
    void scandata(){
        cout<<"Enter your username :- ";
        cin>>username;
        cout<<"Enter your email :- ";
        cin>>email;
        cout<<"Enter your customer id :- ";
        cin>>customerid;
    }
    void displayinfo(){
        cout<<"\n"<<customerid<<"\t"<<email<<"\t"<<username;
    }
};
class vendor : public user{
    public:
    int vendorid;
    void scandata(){
        cout<<"Enter your username :- ";
        cin>>username;
        cout<<"Enter your email :- ";
        cin>>email;
        cout<<"Enter your customer id :- ";
        cin>>vendorid;
    }
    void displayinfo(){
        cout<<"\n"<<vendorid<<"\t"<<email<<"\t"<<username;
    }
};

int main(){
    int usertype;
    cout<<"\nEnter 1 if you are customer\nEnter 2 if you are vendor\nEnter your choise :- ";
    cin>>usertype;
    switch(usertype)
    {
    case 1:
        customer c;
        c.scandata();
        c.displayinfo();
        break;
    case 2:
        vendor v;
        v.scandata();
        v.displayinfo();
        break;
    default:
            cout<<"Enter valid choise";
        break;
    }
    return 0;
}