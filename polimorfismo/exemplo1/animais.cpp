#include"animais.h"

Vaca::Vaca():Animal("Vaca"){
    this->printNome();
}
void Vaca::emitirSom(){
    cout<<"Muuu"<<endl;
}

Cachorro::Cachorro():Animal("Cachorro"){
    this->printNome();
}
void Cachorro::emitirSom(){
    cout<<"Au au"<<endl;
}