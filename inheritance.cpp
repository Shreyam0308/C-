    #include<iostream>
    #include<conio.h>
    using namespace std;

class person{
    protected:
        char name[50];
        int age;
};
class employee : protected person{
    protected:
        int eid;
        char department[50];
};
class proffesor : private employee{
    protected:
        char course[50];
        char publication[50];
    public:
        void scanData(){
            cout<<"Enter employee id :- ";;
            cin>>eid;
            cout<<"Enter your name :- ";;
            cin>>name;
            cout<<"Enter department name :- ";;
            cin>>department;
            cout<<"Enter your age :- ";;
            cin>>age;
            cout<<"Enter course name :- ";;
            cin>>course;
            cout<<"Enter publication :- ";;
            cin>>publication;
        }
        void dispData(){
            cout<<"\n"<<eid<<"\t"<<name<<"\t"<<age<<"\t"<<department<<"\t"<<course<<"\t"<<publication;
        }
};

int main(){
    proffesor p;
    p.scanData();
    p.dispData();
    return 0;
}