#include <iostream>
#include<fstream>

using namespace std;

class Pessoa{
    private:
    int idade;
    float peso;
    string nome;

    public:
    Pessoa(){
        this->nome = "";
        this->idade = 0;
        this->peso - 0.0;
    }
    Pessoa(int, string, float){
        this->idade =idade;
        this->nome = nome;
        this->peso = peso;
    }
    void setPeso(){
        this->peso = peso;
    }
    void setNome(){
        this->nome = nome;
    }
    void setIdade(){
        this->idade =idade;
    }
    string getNome(){
        return this->nome;
    }
    int getIdade(){
        return this->idade;
    }
    float getPeso(){
        return this->peso;
    }
};