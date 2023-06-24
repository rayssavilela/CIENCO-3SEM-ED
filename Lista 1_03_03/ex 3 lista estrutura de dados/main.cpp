#include <iostream>

using namespace std;

int main()
{
     int horas;
     float salmin, imposto, salbruto, salreceb, horatrab;

     imposto = 0;
     salreceb = 0;
     salbruto = 0;

     cout << "Defina a quantidade de horas trabalhadas em minutos: ";
     cin >> horas;

     cout << "Defina o valor do salario minimo do funcionario: ";
     cin >> salmin;

     horatrab = (salmin / 2);
     salbruto = (horas * horatrab);
     imposto = imposto + (salbruto * (3 / 100));
     salreceb = salreceb + (salbruto - imposto);

     cout << "O Funcionario ira receber: R$" << salreceb << endl;





}
