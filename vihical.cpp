#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class vihical{
    public:
    virtual void getspec() = 0;
};
class twvihical : public vihical{
    public:
    void getspec(){
        cout<<"twVihical :: getspec :- ";
    }
};
class lmvihical : public vihical{
    public:
    void getspec(){
        cout<<"lmVihical :: getspec :- ";
    }
};
class hmvihical : public vihical{
    public:
    void getspec(){
        cout<<"hwVihical :: getspec :- ";
    }
};

int main(){
    int choise;
    vihical* p;
    cout<<"Enter 1 for Two wheeler Vihical\nEnter 2 for Light moter vihical\nEnter 3 for Heavy moter vihical\nEnter your Choise :- ";
    cin>>choise;
    switch (choise)
    {
    case 1:
{        twvihical tw;
        p = &tw;
        p->getspec();
        break;}
    case 2:
{        lmvihical lm;
        p = &lm;
        p->getspec();
        break;}
    case 3:
{        hmvihical hm;
        p = &hm;
        p->getspec();
        break;}
    default:
        cout<<"Enter a valid input.";
        break;
    }
    return 0;
}