#include <iostream>
#include <string.h>
using namespace std;

#define PESSOAS 10

/*Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armaze os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário */

string hipotese;
void NomesIguais(string nomes[])
{
    int quantidade = 0;
    while(quantidade < PESSOAS)
    {
        if(nomes[quantidade] != hipotese)
        {
            cout << "NAO ACHEI" << endl;
        }
        else
        {
            cout << "ACHEI" << endl;
        }
        quantidade++;
    }


}
int main()
{
    string nomes[PESSOAS];
    int quantidade = 0;
    while(quantidade < PESSOAS)
    {
        cout << "Entre com o nome: ";
        cin >> nomes[quantidade];
        quantidade++;
    }

    cout << "Defina um nome hipotese: ";
    cin >> hipotese;

    NomesIguais(nomes);

}
