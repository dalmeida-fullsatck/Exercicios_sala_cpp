#include<iostream>
using namespace std;

class Carro{
private: 
    string marca; 
    int velocidade = 20;
public:
    Carro(string m): marca(m){}


    int acelerar(){
        int aceleracao;
        cout << "\nQuantos km/h você quer acelerar?\n(Exemplo: 20) " << endl; cin >> aceleracao;
        if(  aceleracao > 0 && aceleracao < 190){
            velocidade += aceleracao;
        }else{
            cout << "Velocidade inválida!"<< endl;
        }
        return velocidade;
    }
    int frear(){
        int freio;
        cout << "Sua velocidade tá em: "<< velocidade<<"km/h" "\nQuantos km/h você quer frear o carro?\n(Exemplo: 20) "<< endl; cin >> freio;
        if(  freio > 0 && freio < velocidade){
            velocidade  -= freio;
        }else{
            cout << "Freio não aceito, você não pode parar o carro! "<<endl;
        }
        return velocidade;
        }
    void exibirInformacoes(){
        cout << "\nO seu "<< marca +
        " está a " << velocidade << "km/h"<< endl;
        if(velocidade > 150){
            cout<< "Freie um pouco para direção segura" << endl;
        }

    }

    
};

int main(){
    Carro c1("Fiat Uno");

    c1.acelerar();
    
    c1.exibirInformacoes();
    c1.frear();
    c1.exibirInformacoes();

    return 0;
}