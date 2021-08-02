#include "navegador.h"

    Navegador::Navegador(){
        this->count = 0;
        this->guias[count] = new Guia("Google.com", "http://google.com");
        count++;
    }
    void Navegador::abrirGuia(string titulo, string url){
        if (count < MAXTAM) {
            this->guias[count] = new Guia(titulo, url);
            count ++;
        } else{
            cout<<"Limite de guias abertas simultaneamente alcancado!!"<<endl;
        }
    }
    
    void Navegador::fecharGuia(int n){
        string resp;
        cout<<"Tem certeza que fechara esta guia?? [s/n]"<<endl;
        cin>>resp;
        if (resp =="s"|| resp == "S"){
            if(guias[n] != NULL){
                delete guias[n];
                count --;
                for(int i = n; i < count; i++){
                    guias[i] = guias[i+1];
                }
                cout<<"Guia finalizzada com sucesso!!"<<endl;
            }
        }
    }

    void Navegador::listarGuias(){
    for(int i = 0; i < count; i++)
        cout <<"["<<i<<"] "<<guias[i]->getTitulo()<<endl;
}