#include <iostream>

using namespace std;

int main()
{
    float vetortemp[365];
    float total = 0;
    float media = 0;
    float abaixo = 0;
    float menortemp = 1000;
    float maiortemp = -1000;

   for(int i = 0; i < 365; i++)
    {
        cout << "Defina a temperatura por dias: ";
        cin >> vetortemp[i];
        total += vetortemp[i];

        if(vetortemp[i] < menortemp)
        {
            menortemp = vetortemp[i];
        }
        if(vetortemp[i] > maiortemp)
        {
           maiortemp = vetortemp[i];
        }
    }
    media = total / 365;

    cout << "A temperatura media do ano e: " << media << endl;


    for(int i = 0; i < 365; i++)
    {
        if(vetortemp[i] < media)
        {
            abaixo++;
        }
    }
    cout << "A menor temperatura e: " << menortemp << endl;
    cout << "A maior temperatura e: " << maiortemp << endl;
    cout << "A quantidade de dias de temperaturas abaixo da media e: " << abaixo << endl;
}
