#include <iostream>
#include <string>
using namespace std;


struct registro
{
    string nome;
    string endereco;
    int cpf;
    int idade;
};


int main()
{

  registro Cadastro[5];

  for(int i = 0; i < 5; i++)
  {
      cout << "Defina o nome: " << endl;
      getline(cin, Cadastro[i].nome);

      cout << "Defina o endereco: " << endl;
      getline(cin, Cadastro[i].endereco);

      cout << "Defina o CPF: " << endl;
      cin >> Cadastro[i].cpf;

      cout << "Defina a idade: " << endl;
      cin >> Cadastro[i].idade;
      cin.ignore();
  }

  for(int i = 0; i < 5; i++)
  {
      cout << Cadastro[i].nome << endl;
      cout << Cadastro[i].endereco << endl;
      cout << Cadastro[i].cpf << endl;
      cout << Cadastro[i].idade << endl;
  }
}
