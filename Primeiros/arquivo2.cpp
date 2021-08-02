#include <iostream>
#include <fstream>
using namespace std;


int main(){
    fstream fp;
    string linha;

    fp.open("teste.txt", ios::in);
    while(!fp.eof()){
        getline(fp, linha);    
        cout<<linha<<endl;
    }
    
    fp.close();
    
    return 0;
}

// ios::in - leitura
// ios::out - gravacao e criar arquivo
// ios::trunc - truncar arquivo