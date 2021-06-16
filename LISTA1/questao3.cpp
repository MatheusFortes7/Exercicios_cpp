#include<iostream>
#include<fstream>

using namespace std;

class Relogio{
    private:
    int hora;
    int minuto;
    int segundo;

    public:
    Relogio(int hora, int minuto, int segundo){
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
    Relogio(){
        this->hora = 0;
        this->minuto = 0;
        this->segundo = 0;
    }
    void setHora(int, int, int){
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }
    int getHora(int,int,int){
        return this->hora, this->minuto, this->segundo;
    }
    void Avanca(){
        if(segundo = 59){
            this->segundo = 0;
            this->minuto++;
        } else{
            this->segundo++;
        }
        if(minuto = 59){
            this->minuto = 0;
            this->hora++;
        }else{
            this->minuto++;
        }
        if(hora = 23){
            this->hora = 0;
        } else {
            this->hora++;
        }

    }
};