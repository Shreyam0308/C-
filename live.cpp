#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class employee{
    public:
    int salary;
    employee(){}
    char name[50];
    void display(){
        cout<<"\nName :- "<<name<<"\t\tSalary :- "<<salary;
    }
};

class manager : public virtual employee{
    public:
    int level;
    manager(){}
    void display(){
        employee::display();
        cout<<"\tLevel :- "<<level;
    }
};

class executive : public virtual employee{
    public:
    int stockoption;
    executive(){}
    void display(){
        employee::display();
        cout<<"\tStock options :- "<<stockoption;
    }
};

class managerexecutive : public manager, public executive{
    public:
    managerexecutive(char name[],int salary,int level,int stockoption){
        strcpy(this->name, name);
        this->salary = salary;
        this->level = level;
        this->stockoption = stockoption;
    }
    void display(){
        employee::display();
        cout<<"\t\tLevel :- "<<level<<"\tStock options :- "<<stockoption;
    }
};

int main(){
    managerexecutive me("Shreyam",50000,5,50);
    me.display();
    return 0;
}