#ifndef PESSOA_H
#define PESSOA_H

#include<iostream>
#include<time.h>
#include"data.h"
using namespace std;

class Pessoa{
    private: 
    string nome;
    float altura;
    Data *dataNascimento;

    public:
    Pessoa();
    ~Pessoa();
    void setNome(string nome);
    void setAltura(float altura);
    void setDataNascimento(Data *dataNascimento);
    string getNome();
    float getAltura();
    Data *getDataNascimento();
    string toString();
    Pessoa& operator&= (Pessoa &p);

};

#endif // !PESSOA_H