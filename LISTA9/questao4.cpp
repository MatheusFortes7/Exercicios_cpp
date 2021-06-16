#include<iostream>
#include<fstream>

using namespace std;

class Circulo{
    private:
        int diametro;
        int raio1;
        int raio2;
        int x;
        int y;
        int porcentagem;
        int Area(){
            float respArea = (2*3.14) * this->raio1;
            return respArea;
        }
        void Distancia(){
            this->raio1 + this->raio2;
        }
        void Circunferencia(){
            3.14 * (this->raio1 * this->raio1);
        }

    public:
        Circulo(){
            this->raio1 = 0;
            this->raio2 = 0;
            this->diametro = 0;
            this->x = 0;
            this->y = 0;
            this->porcentagem = 0;
        }
        Circulo(int,int,int){
            this->raio1 = raio1;
            this->raio2 = raio2;
            this->diametro = diametro;
            this->x = x;
            this->y = y;
            this->porcentagem = porcentagem;
        }
        void setRaio(){
            this->raio1 = raio1;
        }
        void aumentaRaio(){
            this->raio1 + (porcentagem*0.01);
        }
        void definirCentro(){
            this->x = x;
            this->y = y;
        }
        int getRaio(){
            return this->raio1;
        }
        int getCentro(){
            return this->x, this->y;
        }
        int getArea(){
            return this->Area();
        }

};