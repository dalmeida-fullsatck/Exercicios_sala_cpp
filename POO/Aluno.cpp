#include<iostream>
using namespace std;


class Aluno{
private:
    double nota;
    string nome;

public:
    Aluno(string n): nome(n){}

    void getNota(){
        if (nota == -1){
            cout << "Não há notas cadastradas para esse aluno!" <<endl;            
        }else{
            cout << nome << " Aluno Nota: " << this -> nota<< "\n";
        }
        
    }

    void setNota(double n){
        if(n >=0 && n<=10 ){
            nota =n;
            cout<< "Nota cadastrada com sucesso!"<< endl;
            
        }else{
            cout << "Nota inválida!\nApenas de 0 A 10"<<endl;
            nota = -1;
        }        
    }
};

int main(){

    Aluno a1("Davi");
    a1.setNota(10);
    a1.getNota();
    return 0;
}
