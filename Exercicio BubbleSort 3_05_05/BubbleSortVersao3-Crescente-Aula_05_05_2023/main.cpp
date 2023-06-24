#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{

    for(int i = 0; i <= 9; i++)
    {
        cout << i + 1 << " numero: " << x[i] << endl;
    }
}

void Bubble3(int x[])
{
    int troca = 0;
    int aux = 0;

    do{
    for(int j = 1; j <= 9; j++)
    {
        for(int i = 9; i >= j; i--)
        {
            if(x[i] < x[i - 1])
            {
                aux = x[i];
                x[i] = x[i - 1];
                x[i - 1] = aux;
            }
            if(x[i] > x[i - 1])
            {
                troca = 1;
            }
        }
    }
    }while(troca == 0);
}

int main()
{
    int x[10];

    for(int i = 0; i <= 9; i++)
    {
        cout << "Digite um numero:" << endl;
        cin >> x[i];
    }


    Bubble3(x);
    imprimeVetor(x);

    return 0;
}
