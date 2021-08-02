#include<iostream>

using namespace std;

class Retangulo{
    protected:
    int altura;
    int largura;
    
    public:

    Retangulo(){
        altura = 0;
        largura = 0;
    }

    Retangulo(int altura, int largura){
        this->altura = altura;
        this->largura = largura;
    }

    int area(){
        return altura * largura;
    }

    int perimetro(){
        return 2 * (largura + largura);
    }

    void set_altura(int altura){
        this->altura = altura;
    }

    void set_largura(int largura){
        this->largura = largura;
    }

    int get_altura(){ return altura;}

    int get_largura(){ return largura;}
};

class Quadrado: public Retangulo{
    
    private: 
    int lado;

    public:
    Quadrado(int lado) : Retangulo(lado,lado){
        this->lado = lado;
    }

};

int main(){

    Retangulo *r1 = new Retangulo();

    r1 -> set_altura(10);
    r1 -> set_largura(20);

    cout<< "Area do retangulo : "<< r1-> area()<<endl;
    cout<< "Perimetro do retangulo : "<< r1-> perimetro()<<endl;

    cout <<endl;

    Quadrado *q1 = new Quadrado(10);
    cout << "Area do quadrado: "<< r1 ->area()<<endl;
    cout << "Perimetro do quadrado: "<< r1 ->perimetro()<<endl;

return 0;
}