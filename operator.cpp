#include<iostream>
#include<conio.h>
using namespace std;

class Calc{
    private:
        int no1,no2,no3;
    
    public:
        Calc(int no1, int no2, int no3){
            this->no1 = no1;
            this->no2 = no2;
            this->no3 = no3;
        }

        void operator -(){
            no1 = -no1;
            no2 = -no2;
            no3 = -no3;
        }

        void disp(){
            cout<<"\nNO 1 :- "<<no1;
            cout<<"\nNO 2 :- "<<no2;
            cout<<"\nNO 3 :- "<<no3;
        }
};

int main(){
    Calc c(10,20,30);

    c.disp();

    -c;
    cout<<"\nAfter unary operation\n";
    c.disp();
    return 0;
}