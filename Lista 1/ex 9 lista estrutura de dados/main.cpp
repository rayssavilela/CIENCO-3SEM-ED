#include <iostream>

using namespace std;

int main()
{
    int numal;
    float altura;
    int pessoa = 3;
    float alturamaior = 0.00;
    float alturamenor = 999;
    int nummaior = 0;
    int nummenor = 999;

    for(int i = 1; i < pessoa; i++)
    {
        cout << "Defina o numero do aluno: ";
        cin >> numal;

        cout << "Defina a altura do aluno: ";
        cin >> altura;

        if(altura > alturamaior)
        {
            alturamaior = altura;
            nummaior = numal;
        }
        if(altura < alturamenor)
        {
            alturamenor = altura;
            nummenor = numal;
        }

    }
            cout << "O aluno mais baixo e o: " << nummenor << " e sua altura e de: " << alturamenor << "m" << endl;
            cout << "O aluno mais alto e o: " << nummaior << " e sua altura e de: " << alturamaior << "m" << endl;
}
