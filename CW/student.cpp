#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
        int rno;
        char name[50];
        int std;
    public:
        student(){
            cout<<"\n--------------Default Constructor------------------";
            rno = 1;
            strcpy(name,"Shreyam");
            std = 12;
        }
        student(int rno, char name[], int std){
            cout<<"\n--------------Perameterised Constructor------------------";
            this->rno = rno;
            strcpy(this->name,name);
            this->std = std;
        }
        student(student &s){
            cout<<"\n--------------Copy Constructor------------------";
            this->rno = s.rno;
            strcpy(this->name,s.name);
            this->std = s.std;
        }
        ~student(){
            cout<<"\n Destructor called"<<this;
        }
        void display(){
            cout<<"\n"<<rno<<"\t"<<name<<"\t"<<std;
        }
};

int main(){
    student s1;
    s1.display();
    student s2(2,"Dev",12);
    s2.display();
    student s3(s1);
    s3.display();
    return 0;
}