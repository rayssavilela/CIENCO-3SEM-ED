#include <iostream>

using namespace std;
#define NOTAS 20

float MediaValoresVetor(int vet[], int tam)
{
    float soma = 0;
    for(int i = 0; i < NOTAS; i++)
    {
        soma += vet[i];
    }
    return soma / tam;

}
int main()
{
    int vet[NOTAS], acima = 0;
    float media;

    for(int i = 0; i < NOTAS; i++)
    {
        cout << "Digite a nota " << i + 1 << ": " << endl;
        cin >> vet[i];
    }

    media = MediaValoresVetor(vet, NOTAS);
    cout << "Media: " << media << endl;

    for(int i = 0; i < NOTAS; i++)
    {
        if(vet[i] > media)
        {
            acima++;
        }
    }

    cout << "Notas acima da media: " << acima << endl;
    cout << "Notas abaixo da media " << NOTAS - acima;

    return 0;

}
