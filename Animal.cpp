#include<iostream>
using namespace std;

class Animal{
private: 
    string especie, som;
public:
    Animal(string especie, string som){
        this -> especie = especie;
        this -> som = som;
    }
    void emite_som(){
        cout << especie << " faz " << som; 
    } 

};

int main(){
    Animal a1("Cachorro", "Au! Au!");

    a1.emite_som();
    
    return 0;
}
