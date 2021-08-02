#ifndef GUIA_H
#define GUIA_H

#include <iostream>

using namespace std;

class Guia{
    private:
        string titulo;
        string url;
        string id;
        int conteudo[1000000];
    public:
        Guia();
        Guia(string, string);
        void setId(string id);
        void setTitulo(string titulo);
        void setUrl(string url);
        string getId();
        string getTitulo();
        string getUrl();
};


#endif // !GUIA_H