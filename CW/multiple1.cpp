#include<iostream>
#include<conio.h>
using namespace std;

class lightcontroller{
    public:
        void controlllight(){
            cout<<"\nI tControll's Lights of rooms.";
        }
};

class tempraturecontroller{
    public:
        void controlltemprature(){
            cout<<"\nIt Controll's Temptrature of rooms.";
        }
};

class securitysystem{
    public:
        void managesecurity(){
            cout<<"\nIt Controll's Security system of house.";
        }
};

class smarthomehub : public lightcontroller, public tempraturecontroller, public securitysystem{
    public:
        void monitor(){
            cout<<"\nIt monitor's all smart devices of home.";
        }
};

int main(){
    smarthomehub smart;
    smart.controlllight();
    smart.controlltemprature();
    smart.managesecurity();
    smart.monitor();
    return 0;
}