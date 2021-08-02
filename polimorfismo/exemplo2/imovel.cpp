#include"imovel.h"

Imovel::Imovel(){
    this->enderco = "";
    this->preco = 0;
}

Imovel::Imovel(string endereco, float preco){
    this->enderco = enderco;
    this->preco = preco;
}

void Imovel::setEndereco(string endereco){
    this->enderco = enderco;
}

string Imovel::getEndereco(){
    return this->enderco;
}

void Imovel::setPreco(float preco){
    this->preco = preco;
}

float Imovel::getPreco(){
    return this->preco;
}




ImovelNovo::ImovelNovo():Imovel(){
    this->valorAdicional = 0;
}

ImovelNovo::ImovelNovo(string endereco, float preco, float valorAdicional):Imovel(endereco, preco){
    this->valorAdicional = valorAdicional;
}

void ImovelNovo::setValorAdicional(float valorAdicional){
    this->valorAdicional = valorAdicional;
}

float ImovelNovo::getValorAdicional(){
    return this->valorAdicional;
}

void ImovelNovo::imprimirPreco(){
    cout<<"O valor do Imovel Novo: R$ "<< this->preco + this->valorAdicional <<endl;
}



ImovelVelho::ImovelVelho():Imovel(){
    this->valorDesconto = 0;
}

ImovelVelho::ImovelVelho(string endereco, float preco, float valorDesconto):Imovel(endereco, preco){
    this->valorDesconto = valorDesconto;
}

void ImovelVelho::setValorDesconto(float valorDesconto){
    this->valorDesconto = valorDesconto;
}

float ImovelVelho::getValorDesconto(){
    return this->valorDesconto;
}

void ImovelVelho::imprimirPreco(){
    cout<<"O valor do Imovel Velho: R$ "<< this->preco - this->valorDesconto <<endl;
}
