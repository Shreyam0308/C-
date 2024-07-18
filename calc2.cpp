#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Calc{
    int no1,no2;

    public:
        Calc(){

        }

        Calc(int no1, int no2){
            this->no1 = no1;
            this->no2 = no2;
        }

        void disp(){
            cout<<"\nNo 1 :- "<<no1<<"\tNo 2 :- "<<no2<<"---------->"<<this;
        }
        friend Calc operator +(Calc &c1, Calc &c2);
};

Calc operator +(Calc &c1, Calc &c2){
    Calc temp;
    temp.no1 = c1.no1 + c2.no1;
    temp.no2 = c1.no2 + c2.no2;

    return temp;
}

int main(){
    Calc c1(10,20), c2(30,40), c3(0,0);

    c1.disp();
    c2.disp();
    c3.disp();

    c3 = c1 + c2;

    c3.disp();

    return 0;
}