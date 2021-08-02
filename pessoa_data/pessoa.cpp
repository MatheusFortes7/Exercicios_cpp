
#include"pessoa.h"


Pessoa::Pessoa(){
    this->nome = "";
    this->altura = 0.0;
    dataNascimento = new Data();
}

Pessoa::~Pessoa(){
    
    #ifdef DEBUG
    cout<<"Memoria desalocada..."<<endl;
    #endif // DEBUG
    delete dataNascimento;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setAltura(float altura){
    this->altura = altura;
}

void Pessoa::setDataNascimento(Data *dataNascimento){
    this->dataNascimento = dataNascimento;
}

string Pessoa::getNome(){
    return this->nome;
}

float Pessoa::getAltura(){
    return this->altura;
}

Data *Pessoa::getDataNascimento(){
    return dataNascimento;
}

string Pessoa::toString(){
    string resp = nome +"," + to_string(altura) + "," + dataNascimento->toString();
    return resp;
}

Pessoa& Pessoa::operator&= (Pessoa &p){
    Pessoa *p1 = new Pessoa();
    p1->nome = p.nome;
    p1->altura = p.altura;
    p1->dataNascimento = p.dataNascimento->clone();
    return *p1;
}