#include<iostream>
using namespace std;

int main(){
    string nome;
    float altura, peso;

    cout<< "Entre com a sua altura: ";
    cin >> altura;
    cout<< "Entre com o seu peso: ";
    cin>> peso;
    cout<< "Entre com o seu nome: ";
    cin.ignore();
    getline(cin,nome);

    float imc = peso/(altura*altura);

    cout << nome << " - imc: " << imc<<endl;

    return 0;
}