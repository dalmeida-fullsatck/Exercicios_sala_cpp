#include <iostream>
#include <string>
using namespace std;

int main(){
    string login, senha;
    int tentativas = 0;

    while(tentativas < 4){
        cout << "LOGIN: ";
        cin >> login;
        
        cout << "SENHA:";
        cin >> senha;
        if(login == "Davi_Almeida" &&senha == "246810"){
            cout << "Acesso Liberado" << endl;
            break;
        }else{
            cout << "Tentativa " << tentativas+1 << "/3\nTente outra vez\n", tentativas;
            tentativas++;
        }
        }
    if(login != "Davi_Almeida" &&senha != "246810"){
        cout << "Limite Excedido!\nTente mais tarde.." << endl;

    }    
    return 0;
    }

