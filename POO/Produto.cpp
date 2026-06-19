#include <iostream>
using namespace std;

class Produto{
protected:
    string nome;
    double preco;

public: 
    Produto(string n, double p) : nome(n), preco(p){}

    virtual void mostrarDados(){
     cout << nome << " - " << preco << endl;
    }
};

class Livro : public Produto{

protected: 
    string autor;
    int serie;
public: 

    Livro(string n, double p, string a, int s) : Produto(n, p), autor(a), serie(s){}

    void mostrarDados() override{
        cout << nome << " - " << preco << "\nAutor - " << autor<< "\nNumero de série -  "<< serie << "\n" << endl;
    }
};

class Eletronico : public Produto{
protected:
    string marca;
    int volts;

public: 
     Eletronico(string n, double p, string m, int v ) : Produto(n,p), marca(m), volts(v){}
    void mostrarDados() override{
        cout << nome << " - " << preco << "\nMarca - " << marca<< "\nVoltagem - "<< volts << "\n" << endl;
    }

};

int main(){
    cout << "---Eletrônicos---"<< endl;
    Eletronico e1("Geladeira", 3000, "Electrolux", 127);
    e1.mostrarDados();
    Eletronico e2("Ventilador", 600, "Arno", 127);
    e2.mostrarDados();

    cout << "---Livros---"<< endl;
    Livro l1("Algoritmos", 67.50, "Barghava", 1111125);
    l1.mostrarDados();
    Livro l2("Python", 89.98, "Nilo", 2232455);
    l2.mostrarDados();
    cout << "---Produtos---"<< endl;
    Produto p1("Copo", 15.50);
    p1.mostrarDados();
    Produto p2("Bolsa", 79.99);
    p2.mostrarDados();

    return 0;
}