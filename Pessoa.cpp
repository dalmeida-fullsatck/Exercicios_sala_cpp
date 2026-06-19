#include <iostream>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
public:
    Pessoa(string nome, int idade){
        this-> nome = nome;
        this -> idade = idade;
    }   
    void mostrar_dados(){
        cout << "Nome: " << nome ;
        cout << "\nIdade: " << idade <<endl; 
    }
};

int main(){ 
    Pessoa p1("Davi", 20);
    p1.mostrar_dados();
    return 0;
}
