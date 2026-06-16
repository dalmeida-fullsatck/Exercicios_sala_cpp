#include <iostream>
using namespace std;
//Aula 15/06/2026 - Professora Érica Dilly
class Cadeira{
private:
    string tipo;
public:
    Cadeira(string tipo){
        this->tipo = tipo;
    }
    void abaixar(){
    cout << "\nCadeira de " << tipo <<  " Abaixa\n"; 
    }
    void levantar(){
    cout << "\nCadeira de " << tipo <<  " Levanta\n"; 
    }

};

int main(){
    Cadeira c1("Escritório");
    c1.abaixar();
    c1.levantar();
    return 0;
}