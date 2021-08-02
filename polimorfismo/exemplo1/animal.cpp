#include"animal.h"
#include<iostream>

using namespace std;

Animal::Animal(){
    this->nome = "";
}

Animal::Animal(string nome){
    this->nome = nome;
}

void Animal::printNome(){
    cout<<"Meu nome e: "<< nome <<endl;
}