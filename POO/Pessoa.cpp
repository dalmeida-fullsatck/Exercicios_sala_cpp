#include<iostream>
using namespace std;


class Pessoa{
protected:
    string nome;
    int idade;
public:

    Pessoa(string n, int i ) : nome(n), idade(i){}
    virtual void falar(){
        cout << "Olá!";

    }

    void fazerFalar(Pessoa* p){
        p-> falar();

    }
};

class Professor : public Pessoa{

private: 
    string disciplina; 

public:

    Professor(string n,int i,  string d) :  Pessoa(n,i), disciplina(d){}
    void falar() override{
        cout <<"Olá! Sou o professor " << nome << "\nTenho " << idade << " anos "<<"\nLeciono a disciplina de " <<disciplina<< endl;

    }
    

};
class Aluno : public Pessoa{
private: 
    int matric;
public:
    Aluno(string n, int i, int m):  Pessoa(n,i), matric(m){}
    void falar() override{
        cout <<"Olá! Sou o Aluno " << nome << "\nTenho " << idade << " anos "<<"\nMinha matricula é " << matric << endl;
    }

};


void fazerFalar(Pessoa* p){
        p-> falar();

}

int main(){
    Professor p1 ("Donald", 25, "Matemática");
    p1.falar();

    Aluno a1("Trump", 15, 15062006);
    a1.falar();


    // Pessoa* p1 = new Pessoa("João", 23);
    Pessoa* p2 = new Professor("Veiga", 23, "Futebol");
    Pessoa* p3 = new Aluno("Endrick", 16, 2010);

    fazerFalar(p2);
    fazerFalar(p3);

    delete p2;
    delete p3;


    
    return 0;
}