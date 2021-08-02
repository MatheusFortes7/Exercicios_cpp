#ifndef TELEVISAO_H
#define TELEVISAO_H

#include<iostream>
using namespace std;

class Televisao{
    private:
        int canal;
        int volume;
    
    public:
        Televisao();
        Televisao(int, int);
        Televisao(int);
        int getCanal();
        int getVolume();
        void maisCanal();
        void menosCanal();
        void setCanal(int);
        void setVolume(int);
        void maisVolume();
        void menosVolume();
};


#endif // !TELEVISAO_H