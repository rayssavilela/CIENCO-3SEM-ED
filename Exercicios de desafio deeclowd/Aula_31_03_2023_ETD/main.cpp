#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

    string nome;
    float salario;
    float vendas;
    float comissao;
    float salfinal;
    float porcentagem;

   cout << "Defina o nome do funcionario: ";
   getline(cin, nome);

   cout << "Qual seu salário fixo no mes?: ";
   cin >> salario;

   cout << "Qual o total de vendas feitas?: ";
   cin >> vendas;

   comissao = (comissao + (vendas * 0.15));
   salfinal = (salario + comissao);

   cout << fixed << setprecision(2);

   cout << "TOTAL: " << salfinal << endl;





}
