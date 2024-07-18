#include<iostream>
#include<conio.h>
using namespace std;

class audioplayer{
    public:
        void playaudio(){
            cout<<"\nAudio player can play the audio on divice.";
        }
};

class videoplayer{
    public:
        void playvideo(){
            cout<<"\nVideo player can play the video on display.";
        }
};

class recorder{
    public:
        void record(){
            cout<<"\nRecorder record the audio and also video.";
        }
};

class multimideaplayer : public recorder, public audioplayer, public videoplayer{
    public:
        void playall(){
            playaudio();
            playvideo();
            record();
            cout<<"\nCan play all media.";
        }
};
int main(){
    multimideaplayer play;
    play.playall();
}