#ifndef RELOGIO_H
#define RELOGIO_H

#include <iostream>
// #include"mensagem.h"

class Relogio{
    friend class Mensagem;
    private:
        int horas;
        int minutos;
        int segundos;

    public:
        Relogio();
        Relogio(int, int, int);
        ~Relogio();
    private:
        void printHoras();

};

#endif // !RELOGIO_H