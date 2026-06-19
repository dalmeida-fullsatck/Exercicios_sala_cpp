#include <iostream>
using namespace std;

class Funcionario{

protected: 
    string nome, cargo;
    double salario;

public: 
    Funcionario(string n, string c, double s) : nome(n), cargo(c), salario(s){}
    virtual void bonus(){
        salario = salario*1.15;
    }
    void mostrarDados(){
        cout << "Nome: " << nome + 
        "\nCargo: " << cargo + 
        "\nSalário: " << salario << endl;
    }
};

class Gerente : public Funcionario{
protected: 
    string senha;
public: 
    Gerente(string n, string c, double s, string se): Funcionario(n, c, s), senha(se){}

    void bonus() override{
        salario = salario*1.2;
    }
};


int main(){
    Funcionario f1("Davi ", "Programador", 25000.52);

    f1.mostrarDados();
    f1.bonus();
    cout << "Depois do Bônus de 15%" << endl;
    f1.mostrarDados();

    cout<< "\n";

    Gerente g1("Renan", "Gerente de vendas", 5000, "ABCD");
    g1.mostrarDados();
    g1.bonus();
    cout << "Depois do Bônus de 20%" << endl;
    g1.mostrarDados();

    return 0;
}