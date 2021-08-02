#include<iostream>
#include<math.h>

using namespace std;

class Ponto{
    private:
    float x;
    float y;

    public:

    Ponto(){
        x = 5.3;
        y = 4.7;
    }
    Ponto(float x, float y){
        this->x = x;
        this->y = y;
    }

    void set_x(float x){
        this->x = x;
    } 
    void set_y(float y){
        this->y = y;
    } 

    float get_x(){ return this->x;}
    float get_y(){ return this->y;}

    void mostrar(){
        cout<< "x(" << this->x << ")\ty("<< this->y<<")"<<endl;
    }

    bool equals(class Ponto p){
        bool resposta = false;
        if( this->x == p.x && this->y == p.y){
            resposta = true;
        }
        return resposta;
    }

    float distancia(Ponto p){
        float resp;
        resp = sqrt(pow(this->x - p.x,2)+ pow(this->y - p.y,2));
        return resp;
    }

    Ponto operator+(Ponto &p){
        Ponto resp;
        resp.x = this->x + p.x;
        resp.y = this-> y + p.y;
        return resp;
    }
    Ponto operator-(Ponto &p){
        Ponto resp;
        resp.x = this->x - p.x;
        resp.y = this-> y - p.y;
        return resp;
    }
    bool operator!=(Ponto &p){
        bool resp = false;
        if(this->x != p.x || this->y != p.y){
            resp =true;
        }
        return resp;
    }
    bool operator==(Ponto &p){
        bool resp = false;
        if(this->x == p.x && this->y == p.y){
            resp =true;
        }
        return resp;
    }
};

int main(){
    Ponto p;

    return 0;
}