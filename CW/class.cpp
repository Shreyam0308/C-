#include<iostream>

using namespace std;


class student{
private:
    int rn;
    char name[50];
    int std;

public:
    void scandata(){
        cout<<"Enter your Roll number :- ";
        cin>>rn;
        cout<<"Enter your Name :- ";
        cin>>name;
        cout<<"Enter your Standard :- ";
        cin>>std;
    }

    void dispdata(){
        cout<<"\n"<<rn<<"\t"<<name<<"\t"<<std;
    }
};

int main(){
    student s[5];

    for(int i = 0; i < 5; i++){
        s[i].scandata();
    }

    for(int i = 0; i < 5; i++){
        s[i].dispdata();
    }

    return 0;
}