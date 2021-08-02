// Implemente uma classe televisão. A televisão tem um controle de volume do som e um controle
// de seleção de canal. O controle de volume permite aumentar ou diminuir a potência do volume
// de som em uma unidade de cada vez. O controle de canal também permite aumentar e diminuir
// o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado.
// Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.
// No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco
// o volume, e exiba o valor de ambos os atributos.

#include<iostream>
#include"televisao.h"
using namespace std;

void menu(){
    system("clear || cls");
    cout<<" 1 - Para aumentar o volume"<<endl;
    cout<<" 2 - Para abaixar o volume"<<endl;
    cout<<" 3 - Para aumentar o canal"<<endl;
    cout<<" 4 - Para dimiuir o canal"<<endl;
    cout<<" 5 - Para setar um canal"<<endl;
    cout<<" 6 - Verificar status"<<endl;
    cout<<" 7 - Para desligar a TV."<<endl;
}

int main(){
    int opcao;
    Televisao *t1 = new Televisao();
    menu();

    cin>>opcao;
    cin.ignore();
    while (opcao != 7){
        switch(opcao){
        case 1:
            cout<<"Aumentando o volume"<<endl;
            t1->maisVolume();
            cout<<"Novo volume: "<<t1->getVolume()<<endl;
            system("pause");
            break;
        case 2:
            cout<<"Diminuindo o volume"<<endl;
            t1->menosVolume();
            cout<<"Novo volume: "<<t1->getVolume()<<endl;
            system("pause");
            break;
        case 3:
            cout<<"Incrementando o canal"<<endl;
            t1->maisCanal();
            cout<<"Novo canal: "<<t1->getCanal()<<endl;
            system("pause");
            break;
        case 4:
            cout<<"Decrementando o canal"<<endl;
            t1->menosCanal();
            cout<<"Novo canal: "<<t1->getCanal()<<endl;
            system("pause");
            break;
        case 5:
            cout<<"Entre com o novo canal"<<endl;
            int canal;
            cin>>canal;
            t1->setCanal(canal);
            cout<<"novo canal: "<<t1->getCanal()<<endl;
            system("pause");
            break;
        case 6:
            cout<<"Canal: "<<t1->getCanal()<<"\t Volume: "<<t1->getVolume()<<endl;
            break;
        }
        menu();
        cin>>opcao;
        cin.ignore();
    }
    
    delete t1;

    
return 0;
}