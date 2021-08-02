#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream fp;

    fp.open("teste.txt", ios::out);
    if(fp.is_open()){
        fp << "O arquivo foi aberto! ai o!"<<endl;
        fp << "teste de escrita em arquivo"<<endl;
        fp.close();
    }

    return 0;
}