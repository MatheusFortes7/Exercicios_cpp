#ifndef NAVEGADOR_H
#define NVAEGADOR_H

#include "guia.h"
#include <iostream>

using namespace std;

#define MAXTAM 30

class Navegador{
    private:
        Guia *guias[MAXTAM];
        int count;

    public:
        Navegador();
        void abrirGuia(string titulo, string url);
        void fecharGuia(int n);
        void listarGuias();
};


#endif // !NAVEGADOR_H