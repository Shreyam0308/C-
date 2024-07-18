#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class A{
    public:
    int no1;
};
class B : public virtual A{
    public:
    int no2;
};
class C : public virtual A{
    public:
    int no3;
};
class D : public B, public C{
    public:
    int no4;
};
int main(){
    D obj;
    obj.no1 = 10;
    cout<<"No 1 :- "<<obj.no1;
}