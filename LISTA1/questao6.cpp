#include <iostream>

using namespace std;

class Condicionador{
    private:
        int potencia;
        float temp;
        int tempExt;
    
    public:
        Condicionador(){
            this->potencia = 0;
            this->temp = 0.0;
            this->tempExt = 0;
        }
        Condicionador(int potencia, float temp, int tempExt){
            this->potencia = potencia;
            this->temp = temp;
            this->tempExt = tempExt;
        }
        void aumentaPotencia(){
            if(potencia <= 10)
                this->potencia++;
        }
        void diminuiPotencia(){
            if (potencia > 0 )
                this->potencia--;
        }
        void setPotencia(int potencia){
            this->potencia = potencia;
        }
        void setTempExt(int tempExt){
            this->tempExt = tempExt;
        }
        void condicionar(int tempExt, int potencia){
            this->temp = tempExt - (potencia*1.8);
        }
        float getTemp(){
            return this->temp;
        }
        int getTempExt(){
            return this->tempExt;
        }
        int getPotencia(){
            return this->potencia;
        }

};

int main(){
    Condicionador *c1 = new Condicionador();
    Condicionador *c2 = new Condicionador();
    system("cls || clear");
    cout<<"Entre com o valor da temperatura exterior do primeiro caso: "<<endl;
    int temperatura1;
    cin>>temperatura1;
    c1 -> setTempExt(temperatura1);
    cout<<"O valor da temperatura exterior e: "<<c1->getTempExt()<<endl;
    cout<<"Entre o valor da potencia do condicionador: "<<endl;
    int potencia1;
    cin>>potencia1;
    c1-> setPotencia(potencia1);
    cout<<"O valor setado na potencia e: "<<c1->getPotencia()<<endl;
    c1->condicionar(temperatura1, potencia1);
    cout<<"A temperatura resultante do ambiente e de: "<<c1->getTemp()<<endl;
    system("pause");
    system("cls || clear");
    delete c1;
    cout<<"Entre com o valor da temperatura exterior do segundo caso: "<<endl;
    int temperatura2;
    cin>>temperatura2;
    c2 -> setTempExt(temperatura2);
    cout<<"O valor da temperatura exterior e: "<<c2->getTempExt()<<endl;
    cout<<"Entre o valor da potencia do condicionador: "<<endl;
    int potencia2;
    cin>>potencia2;
    c2-> setPotencia(potencia2);
    cout<<"O valor setado na potencia e: "<<c2->getPotencia()<<endl;
    c2->condicionar(temperatura2, potencia2);
    cout<<"A temperatura resultante do ambiente e de: "<<c2->getTemp()<<endl;
    delete c2;

    return 0;
}