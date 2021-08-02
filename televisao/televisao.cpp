#include"televisao.h"
#include <iostream>
using namespace std;

    Televisao::Televisao(){
        this->canal = 0;
        this->volume = 0;
    }
    Televisao::Televisao(int canal, int volume){
        this->canal = canal;
        this->volume = volume;
    }
    Televisao::Televisao(int canal){
        this->canal = canal;
        this->volume = 0;
    }
    int Televisao::getCanal(){
        return this->canal;
    }
    int Televisao::getVolume(){
        return this->volume;
    }
    void Televisao::setCanal(int canal){
        this->canal = canal;
    }
    void Televisao::setVolume(int){
        if(volume > 0)
            this->volume = volume;
    }
    void Televisao::maisVolume(){
        this->volume++;
    }
    void Televisao::menosVolume(){
        if(this->volume > 0)
            this->volume--;

    }
    void Televisao::maisCanal(){
        this->canal++;
    }
    void Televisao::menosCanal(){
        if(this->canal > 0)
            this->canal--;
    }