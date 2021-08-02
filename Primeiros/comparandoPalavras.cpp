#include <iostream>
using namespace std;

int main(){
    string palavra1, palavra2;

    cout<<"Entre com a primeira palavra: ";
    cin>> palavra1;
    cout<<"Entre com a segunda palavra: ";
    cin>> palavra2;

    if(palavra1 == palavra2){
        cout<<"As palavras sao iguas."<<endl;
    } else {
        cout<<"As palavras sao diferentes."<<endl;
    }

    if(palavra1 > palavra2){
        cout<< palavra2 << " - " << palavra1;
    } else if(palavra2 > palavra1){
        cout<< palavra1 << " - " << palavra2;
    }

    return 0;
}