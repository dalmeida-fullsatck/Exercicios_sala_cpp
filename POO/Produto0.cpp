#include <iostream>
using namespace std;

class Produto{
private:
    string nome;
    double preco = 0;
public: 
    Produto(string n): nome(n){}

    void getPreco(){
        if (preco == 0){
            cout << "Não há preço cadastrado para esse Produto!" <<endl;            
        }else{
            cout<< "Preço: " << this -> preco<<endl;
        }
    }
    void setPreco(double p){
        if(p >0  ){
            preco =p;
            cout<< "Preço cadastrado com sucesso para o produto: "<< nome << endl;
            
        }else{
            cout << "Preço inválido! Tente um preço maior do que '0'"<<endl;
            preco = 0;
        }        
    }

    void exibirInformacoes(){
        cout << "Produto: " << nome << " || " << "Preço: " << preco<< endl;

    }

    
};
int main(){
    Produto p1("Mouse-Gamer");
    p1.getPreco();
    p1.setPreco(250.90);
    p1.getPreco();
    
    cout << "\n\n";
    Produto p2("Notebook Positivo");
    p2.getPreco();
    p2.setPreco(-3);
    p2.getPreco();
    cout << "\n\n";
    p1.exibirInformacoes();
    p2.exibirInformacoes();
    return 0;
}