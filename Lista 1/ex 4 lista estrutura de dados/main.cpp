#include <iostream>

using namespace std;

int main()
{
    float salario, reajuste, salreceb;

    cout << "Defina o seu salario para calcular o reajuste: R$";
    cin >> salario;

    reajuste = 0;
    salreceb = 0;

    if (salario < 1000)
    {
        reajuste = (0.15 * 100);
        salreceb = salario + (salario % reajuste);
        cout << "O reajuste será de " << reajuste << "% e voce ira receber R$" << salreceb << endl;
    }
    else if ((salario >= 1000) && (salario <= 1500))
    {
        reajuste = (0.10 * 100);
        salreceb = salario + (salario % reajuste);
        cout << "O reajuste sera de " << reajuste << "% e voce ira receber R$" << salreceb << endl;
    }
    else
    {
        reajuste = (0.05 * 100);
        salreceb = salario + (salario % reajuste);
        cout << "O reajuste sera de " << reajuste << "% e voce ira receber R$" << salreceb << endl;
    }
}
