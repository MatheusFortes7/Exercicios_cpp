#include<iostream>
#include<fstream>

using namespace std;

class Elevador{
    private:
    int andarAtual;
    int totalAndar;
    int capacidade;
    int qntdPessoa;
    
    public:
    Elevador(){
        this->andarAtual = 0;
        this->capacidade = 0;
        this->qntdPessoa = 0;
        this->totalAndar = 0;
    }
    Elevador(int andarAtual, int totalAndar, int capacidade, int qntdPessoa){
        this->andarAtual = andarAtual;
        this->capacidade = capacidade;
        this->qntdPessoa = qntdPessoa;
        this->totalAndar = totalAndar;
    }
    void inicializa(int capacidade, int totalAndar){
        this->capacidade = capacidade;
        this->totalAndar = totalAndar;
    }
    void entra(){
        if(qntdPessoa < capacidade)
        this->qntdPessoa++;
    }
    void sai(){
        if(qntdPessoa > 0)
        this->qntdPessoa--;
    }
    void sobe(){
        if(andarAtual < totalAndar)
        this->andarAtual++;
    }
    void desce(){
        if(andarAtual > 0)
        this->andarAtual--;
    }
    int getAndar(){
        return this->andarAtual;
    }
    int getTotalAndar(){
        return this->totalAndar;
    }
    int getCapacidade(){
        return this->capacidade;
    }
    int getPessoas(){
        return this->qntdPessoa;
    }
};