#include <iostream>

using namespace std;

int main()
{
    int numal;
    float altura;
    float pessoa = 10;
    float alturamaior;
    float alturamenor;
    int nummaior;
    int nummenor;

    for(int i = 0; i < pessoa; i++)
    {
        cout << "Defina o numero do aluno: ";
        cin >> numal;

        cout << "Defina a altura do aluno: ";
        cin >> altura;

        if(altura < 1.50)
        {
            alturamenor = altura;
            nummenor = numal;
        }
        else if(altura > 1.90)
        {
            alturamaior = altura;
            nummaior = numal;
        }

    }
            cout << "O aluno mais baixo e o: " << nummenor << " e sua altura e de: " << alturamenor << "cm" << endl;
            cout << "O aluno mais alto e o: " << nummaior << " e sua altura e de: " << alturamaior << "cm" << endl;
}
