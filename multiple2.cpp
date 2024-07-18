#include<iostream>
#include<conio.h>
using namespace std;

class landvihical{
    public:
        void drive(){
            cout<<"\nIt is land vihical";
        }
};

class watervihical{
    public:
        void sail(){
            cout<<"\nIt is water vihical";
        }
};

class amphibiousvihical : public landvihical, public watervihical{
    public:
        void switchmode(){
            drive();
            sail();
            cout<<"\nIt manages all vihical";
        }
};

int main(){
    amphibiousvihical mode;
    mode.switchmode();
}