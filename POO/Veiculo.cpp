#include <iostream>
using namespace std;


class Veiculo{
protected:
    string marca;
public: 
    Veiculo(string m) : marca(m){}
    virtual void tipo(){
        cout << "Meu veículo é: " << marca << endl;

    }
};

class Carro : public  Veiculo{
private: 
    string modelo;
public: 
    Carro(string m, string mod) : Veiculo(m), modelo(mod){} 

    void tipo() override{
        cout << "O meu carro é um " << marca << "\nModelo: " << modelo << endl; 
    }


};


void verTipo(Veiculo* v){
    v -> tipo();

}

int main(){
    Veiculo* c1 = new Carro ("Fiat", "Uno");
    Veiculo* c2 = new Veiculo ("Chevrolet");
    verTipo(c1);
    verTipo(c2);
}