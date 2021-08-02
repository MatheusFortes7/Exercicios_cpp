#include<iostream>
#include<math.h>
#include"data.h"
#include"pessoa.h"
using namespace std;

int main(){
    Data data01;
    string teste = data01.toString();
    
    Pessoa pessoa01, pessoa02;
    pessoa01.setNome("Matheus Fortes");
    pessoa01.setAltura(1.85);
    pessoa02 = pessoa01;
    cout<<pessoa02.toString()<<endl;
    return 0;
}