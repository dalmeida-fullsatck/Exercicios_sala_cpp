#include <iostream>
using namespace std;
 long long fatorial(int numer){
    if(numer <=1){
        return numer;
    }
    return numer * fatorial(numer-1);

 }

 int main(){
    int numero;
    cout << "Digite um numero para ver o seu fatorial: ";
    cin >> numero;


    if(numero < 0){
        cout << "Nao existe fatorial de negativos";
    }else{
        cout << "fatorial de " <<  numero << " eh: " << fatorial(numero)<< "  "; 
        
    }

 }