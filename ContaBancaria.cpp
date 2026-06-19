#include <iostream>
using namespace std;


class ContaBancaria{
private:
    string titular;
    float saldo;
public:
    ContaBancaria(string titular, float saldo){
        this -> titular = titular;
        this -> saldo = saldo;  
    }

    float deposita(float deposito){
        saldo = saldo +deposito;
        return saldo;
    }

    float saca(float saque){
        saldo = saldo - saque;
        return saldo;
    } 

    void getDados(){
        cout << "\nTitular da conta: " << titular << endl;
        cout << "\nSaldo Final: " << saldo << endl;        
    }
};


int main(){
    ContaBancaria c1("Davi Almeida", 7000);

    c1.saca(300);
    c1.deposita(5000);
    c1.getDados();
    return 0;
}