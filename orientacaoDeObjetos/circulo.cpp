#include<iostream>
#include<math.h>

using namespace std;

class Figura{
    protected:
    string nome;

    public:
    Figura(){
        nome = "";
    }

    void setNome(string nome){
        this->nome = nome;
    }

    string getNome(){
        return nome;
    }

    virtual float getArea() = 0;
    virtual float getPerimetro() =0;
};

class Quadrado:public Figura{
    private:
    float lado;


    public:
    Quadrado(){
        this->lado=0;
    }
    Quadrado(){
        this->lado= lado;
    }

    float getArea(){
        return lado*lado;
    }

    float getPerimetro(){
        return lado+lado+lado+lado;
    }

};

class Circulo:public Figura{
    private:
    float raio;
    
    public:
    static int count;
    Circulo(){
        this->raio = 0;
        this->count++;
    }
    Circulo(float raio){
        this->raio = raio;
        this->count++;
    }

    ~Circulo(){
        cout << "Destruindo circulo.....";
        this->count--;
    }

    void setRaio(float raio){
        this->raio = raio;
    }

    float getRaio(){
        return raio;
    }

    float getArea(){
        float resp = M_PI * pow(raio,2);
        return resp;
    }

    float getPerimetro(){
        float resp = 2*M_PI * raio;
        return resp;
    }
};



int Circulo::count = 0;

int main(){
    Circulo *c1 = new Circulo();
    Quadrado *q1 = new Quadrado();
    

    return 0;
}