#include <iostream>

using namespace std;

int main()
{
    float peso, altura;
    float imc;

    cout << "INFORME O SEU PESO ATUAL: ";
    cin >> peso;

    cout << "INFORME A SUA ALTURA ATUAL: ";
    cin >> altura;

    imc = peso / (altura * altura);


    if (imc < 0)
    {
        cout << "Nao foi possivel determinar!" << endl;
    }
    else if (imc < 20)
    {
        cout << "Voce esta abaixo do peso!" << endl;
    }
    else if (imc < 25)
    {
        cout << "Voce esta no peso ideal!" << endl;
    }
    else
    {
        cout << "Voce esta acima do peso!" << endl;
    }




}
