#include <iostream>
#include <string>
using namespace std;

long fibonacci(int numero){
    if (numero <= 1) {
        return numero;
    }
    return fibonacci(numero-1) + fibonacci(numero-2); 
}
int main(){
    int termos;
    cout << "FIBONACCI\n";
    cout << "Digite um numero para ser feito a série de fibonacci: ";
    cin >> termos;

    cout << fibonacci(termos) << endl; 
    

    return 0;
}