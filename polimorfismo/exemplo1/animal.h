#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>

using namespace std;

class Animal{
    private:
        string nome;
    public:
        Animal();
        Animal(string nome);
        void printNome();
        virtual void emitirSom();
};


#endif // !ANIMAL_H