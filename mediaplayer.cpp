#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class media{
    public:
    char title[40];
};
class audio : public media{
    public:
    int duration;
};
class video : public media{
    public:
    int resolution;
};
class mediaplayer : public audio, public video{
    void displaymediaplayerinfo(char t[50],int a, int b){
        mediaplayer::title = t;
        this->duration = a;
        this->resolution = b;
        cout<<"\nName :- "<<title<<"\nDuration :- "<<duration<<"hr.\nrRsolution :- "<<resolution<<"pixle";
    }
};
int main(){
    mediaplayer mp;
    mp.displaymediaplayerinfo("Mogana",2,4000);
    return 0;
}