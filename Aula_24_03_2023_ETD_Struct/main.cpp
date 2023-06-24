#include <iostream>

using namespace std;

struct pessoa
{
    string nome;
    int idade;
}p;

int main()
{
    pessoa p;

    cout << "Qual seu nome? " << endl;
    getline(cin, p.nome);

    cout << "Quantos anos voce tem? ";
    cin >> p.idade;

    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Nome: " << p.nome << endl;

}
