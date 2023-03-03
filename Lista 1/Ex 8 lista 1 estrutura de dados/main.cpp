#include <iostream>

using namespace std;

int main()
{
    float candidato1 = 0;
    float candidato2 = 0;
    float nulo = 0;
    float branco = 0;
    float codigo;
    float pessoa = 0;
    float percentual1 = 0.00;
    float percentual2 = 0.00;
    float percentual3 = 0.00;
    float percentual4 = 0.00;

    while(codigo != 0)
    {
        cout << "Defina o codigo do candidato: ";
        cin >> codigo;

        if (codigo == 1)
        {
            candidato1++;
        }
        else if (codigo == 2)
        {
            candidato2++;
        }
        else if (codigo == 3)
        {
            nulo++;
        }
        else if (codigo == 4)
        {
            branco++;
        }
    }
    pessoa = candidato1 + candidato2 + nulo + branco;
    percentual1 = ((candidato1 / pessoa) * 100);
    percentual2 = ((candidato2 / pessoa) * 100);
    percentual3 = ((nulo / pessoa) * 100);
    percentual4 = ((branco / pessoa) * 100);

    cout << "O Percentual de votos no candidato 1: " << percentual1 << "%" << endl;
    cout << "O Percentual de votos no candidato 2: " << percentual2 << "%" << endl;
    cout << "O Percentual de votos nulos: " << percentual3 << "%" << endl;
    cout << "O Percentual de votos em branco: " << percentual4 << "%" << endl;



}
