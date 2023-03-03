#include <iostream>

using namespace std;

int main()
{
    float salario, salreceb;

    cout << "Defina o seu salario para calcular o reajuste: R$";
    cin >> salario;

    salreceb = 0;

    if (salario < 1000)
    {
        salreceb = salario + (salario * 0.15);
        cout << "O reajuste sera de 15% e voce ira receber R$" << salreceb << endl;
    }
    else if ((salario >= 1000) && (salario <= 1500))
    {
        salreceb = salario + (salario * 0.10);
        cout << "O reajuste sera de 10% e voce ira receber R$" << salreceb << endl;
    }
    else
    {
        salreceb = salario + (salario * 0.05);
        cout << "O reajuste sera de 5% e voce ira receber R$" << salreceb << endl;
    }
}

