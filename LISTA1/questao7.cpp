#include <iostream>

using namespace std;

class Carro{
    private:
    float litros;
    float km;
    float resultante;

    public:
    Carro(){
        this->litros = 0;
        this->km = 0;
        this->resultante = 0;
    }
    Carro(float litros, float km, float resultante){
        this->litros = litros;
        this->km = km;
        this->resultante = resultante;
    }
    void abastecer(float litros){
        this->litros = litros;
    }
    void mover(float km){
        this->km = km;
    }
    void gasolinaGasta(float litros, float km){
        this->resultante = km/15;
        this->resultante = litros - resultante;
    }
    float getLitros(){
        return this->litros;
    }
    float getKm(){
        return this->km;
    }
    float getResultante(){
        return this->resultante;
    }
};
int main(){
    Carro *c1 = new Carro();
    Carro *c2 = new Carro();

    system("cls || clear");
    cout<<"Entre com o numero de litros que voce deseja abastecer o primeiro carro: ";
    float litros1;
    cin>>litros1;
    c1 -> abastecer(litros1);
    cout<<"Voce abasteceu o carro com "<<c1->getLitros()<<" litros de gasolina"<<endl;
    cout<<"Digite o valor em Km que o carro ira andar: ";
    float km1;
    cin>>km1;
    c1->mover(km1);
    cout<<"O carro ira andar "<<c1->getKm()<<" kilometros"<<endl;
    c1->gasolinaGasta(litros1, km1);
    cout<<endl;
    cout<<"O carro no final da viagem ficara com "<<c1->getResultante()<<" litros de gasolina"<<endl;
    system("pause");
    
    
    delete c1;
    
    setbuf(stdin, 0);
    system("cls || clear");
    cout<<"Entre com o numero de litros que voce deseja abastecer o primeiro carro: ";
    float litros2;
    cin>>litros2;
    c2 -> abastecer(litros2);
    cout<<"Voce abasteceu o carro com "<<c2->getLitros()<<" litros de gasolina"<<endl;
    cout<<"Digite o valor em Km que o carro ira andar: ";
    float km2;
    cin>>km2;
    c2->mover(km2);
    cout<<"O carro ira andar "<<c2->getKm()<<" kilometros"<<endl;
    c2->gasolinaGasta(litros2, km2);
    cout<<endl;
    cout<<"O carro no final da viagem ficara com "<<c2->getResultante()<<" litros de gasolina"<<endl;
}
