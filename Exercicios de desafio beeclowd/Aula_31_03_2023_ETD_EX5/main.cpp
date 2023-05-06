#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double numero[6];
    double total = 0;
    double media = 0;

    int contador = 0;

    cout << fixed << setprecision(1);

    for(int i = 0; i < 6; i++)
    {
        cout << "Defina o numero: ";
        cin >> numero[i];

        if(numero[i] > 0)
        {
            contador++;
            total += numero[i];
        }
    }
    media = total / contador;

    cout << contador << " valores positivos" << endl;
    cout << media;

}
