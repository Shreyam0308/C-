#include<iostream>
#include<conio.h>
using namespace std;

class Calc2;

class Calc1{
    private:
        int no1;
    public:
        Calc1(int no1){
            this->no1 = no1;
        }
        void display(){
            cout<<"\nNumber 1 : "<<no1;
        }

        friend void swap(Calc1 &c1, Calc2 &c2);
};

class Calc2{
    private:
        int no2;
    public:
        Calc2(int no2){
            this->no2 = no2;
        }
        void display(){
            cout<<"\nNumber 2 : "<<no2;
        }

        friend void swap(Calc1 &c1, Calc2 &c2);
};

void swap(Calc1 &c1, Calc2 &c2){
    int temp;
    temp = c1.no1;
    c1.no1 = c2.no2;
    c2.no2 = temp;
}

int main(){

    Calc1 c1(10);
    Calc2 c2(20);
    c1.display();
    c2.display();
    swap(c1,c2);

    cout<<"\n\n------------After swapping----------------\n\n";
    c1.display();
    c2.display();
    return 0;
}