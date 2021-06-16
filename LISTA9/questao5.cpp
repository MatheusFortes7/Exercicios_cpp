
#include <iostream>
using namespace std;

class Televisao{
    private:
        int canal;
        int volume;

    public:
    Televisao(){
        this->canal = 0;
        this->volume = 0;
    }
    Televisao(int canal, int volume){
        this->canal = canal;
        this->volume = volume;
    }
    Televisao(int canal){
        this->canal = canal;
        this->volume = 0;
    }
    int getCanal(){
        return this->canal;
    }
    int getVolume(){
        return this->volume;
    }
    void setCanal(int canal){
        this->canal = canal;
    }
    void setVolume(int){
        if(volume > 0)
            this->volume = volume;
    }
    void maisVolume(){
        this->volume++;
    }
    void menosVolume(){
        if(this->volume > 0)
            this->volume--;

    }
    void maisCanal(){
        this->canal++;
    }
    void menosCanal(){
        if(this->canal > 0)
            this->canal--;
    }
};