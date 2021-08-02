#include "guia.h"
#include <iostream>

using namespace std;

    Guia::Guia(){
        this->titulo = "";
        this->url = "";
        this->id = to_string(rand()%10) + to_string(rand()%10);
    }
    Guia::Guia(string titulo, string url){
        this->titulo = titulo;
        this->url = url;
        this->id = to_string(rand()%10) + to_string(rand()%10);
    }
    void Guia::setId(string id){
        this->id = id;
    }
    void Guia::setTitulo(string titulo){
        this->titulo = titulo;
    }
    void Guia::setUrl(string url){
        this->url = url;
    }
    string Guia::getId(){
        return this->id;
    }
    string Guia::getTitulo(){
        return this->titulo;
    }
    string Guia::getUrl(){
        return this->url;
    };

    