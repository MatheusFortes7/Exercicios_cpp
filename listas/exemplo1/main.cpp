#include <iostream>
#include "veiculo.h"
using namespace std;

int main(){
    Veiculo *veiculos[2];
    veiculos[0] = new Bicicleta();
    veiculos[1] = new Automovel();

    Automovel *carro = (Automovel*) veiculos[1];
    carro->ajustar();
    carro->limpar();
    carro->mudarOleo();
    veiculos[1]->listarVerificacoes();

return 0;
}