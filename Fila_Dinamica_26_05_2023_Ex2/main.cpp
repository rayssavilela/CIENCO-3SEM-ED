#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* empty = vazio
    size = tamanho
    front = frente
    back = atras
    push = empurrar
    pop */


    queue<string> pessoas;

    pessoas.push("RODRIGO");
    pessoas.push("ANDRE");
    pessoas.push("MARIA");
    pessoas.push("ANA");
    pessoas.push("JOSE");
    pessoas.push("RITA");


    cout << "tamanho da fila: " << pessoas.size() << endl;
    cout << "primeira pessoa: " << pessoas.front() << endl;
    cout << "ultima pessoa: " << pessoas.back() << endl<< endl;

    while(!pessoas.empty()){
        cout << "Primeira Pessoa " << pessoas.front() << endl;
        pessoas.pop(); //retira elementos da pilha
    }
    return 0;
}
