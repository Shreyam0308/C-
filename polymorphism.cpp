#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Calc{
    public:
    int sum;
    void addfun(){
        cout<<"Enter atleast 2 numbers.";
    }
    void addfun(int no1,int no2){
        sum = no1 + no2;
        cout<<"\nSum of two numbers :- "<<sum;
    }
    void addfun(int no1,int no2,int no3){
        sum = no1 + no2 + no3;
        cout<<"\nSum of three numbers :- "<<sum;
    }
    void addfun(int no1,int no2,int no3,int no4){
        sum = no1 + no2 + no3 + no4;
        cout<<"\nSum of four numbers :- "<<sum;
    }
};
int main(){
    Calc c;
    c.addfun();
    c.addfun(2,5);
    c.addfun(2,5,3);
    c.addfun(2,5,3,10);
}