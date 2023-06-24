#include <iostream>

using namespace std;

int main()
{
    float valor, precof;
    char codigo;

    cout << "Defina o codigo do produto sendo eles:" << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cin >> codigo;

    cout << "Defina o valor do produto: R$";
    cin >> valor;

    switch(codigo)
    {
    case '1':
        precof = valor - (valor * 0.10);
        cout << "O pagamento deve ser a vista ou cheque, com 10% de desconto:" << endl;
        cout << "Valor com desconto: R$" << precof;
        break;

    case '2':
        precof = valor - (valor * 0.05);
        cout << "O pagamento deve ser a vista no cartao de credito, com 5% de desconto:" << endl;
        cout << "Valor com desconto: R$" << precof;
        break;

    case '3':
        precof = valor / 2;
        cout << "O pagamento deve ser em duas vezes, com preco normal de etiqueta:" << endl;
        cout << "Valor em 2x: R$" << precof;
        break;

    case '4':
        precof = valor + (valor * 0.10);
        precof = precof / 3;
        cout << "O pagamento deve ser em tres vezes, com acrescimo de 10%:" << endl;
        cout << "Valor em 3x: R$" << precof;
        break;

    default:
        cout << "Operacao inexistente" << endl;
        break;
    }




}
