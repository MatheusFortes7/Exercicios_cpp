#ifndef IMOVEL_H
#define IMOVEL_H
#include<iostream>

using namespace std;

class Imovel{
    protected:
        string enderco;
        float preco;
    public:
        Imovel();
        Imovel(string , float );
        void setEndereco(string );
        string getEndereco();
        void setPreco(float );
        float getPreco();
        virtual void imprimirPreco()=0;
};

class ImovelNovo:public Imovel{
    protected:
        float valorAdicional;
    public:
        ImovelNovo();
        ImovelNovo(string , float , float );
        void setValorAdicional(float );
        float getValorAdicional();
        void imprimirPreco();
};

class ImovelVelho:public Imovel{
    protected:
        float valorDesconto;
    public:
        ImovelVelho();
        ImovelVelho(string , float , float );
        void setValorDesconto(float );
        float getValorDesconto();
        void imprimirPreco();
};

#endif // !IMOVEL_H