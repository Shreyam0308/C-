#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class employee{
    int id,salary;
    char name[50],dsgn[50],orgname[50];

    employee(){

    }

    employee(int id, int salary,char name[],char dsgn[],char orgname[]){
        this->id = id;
        this->name[] = name[];
        this->salary = salary;
        this->dsgn[] = dsgn[];
        this->orgname[] = orgname[];
    }

    temp operator +(Calc &c2){
        employee temp;

        temp.id = c2.id;
        strcpy(temp.name,c2.name);
        temp.salary = c2.salary;
        strcpy(temp.dsgn, c2.dsgn);
        strcpy(temp.orgname, c2.orgname);
        c2.id = id;
        strcpy(c2.name, name);
        c2.salary = salary;
        strcpy(c2.dsgn, dsgn);
        strcpy(c2.orgname, orgname);
        id = temp.id;
        strcpy(name, temp.name);
        salary = temp.salary;
        strcpy(dsgn, temp.dsgn);
        strcpy(orgname, temp.orgname);

        return temp;
    }

    void disp(){
        cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<dsgn<<"\n"<<orgname<<"----------->"<<this;
    }

};

int main(){
    employee e1(1,"Shreyam",25000,"Manager","Pharma"),e2(2,"Dev",50000,"Sales","Pharma"),e3;

    e1.disp();
    e2.disp();
    //e3 = e1 + e2;
    e1.disp();
    e2.disp();

    return 0;
}