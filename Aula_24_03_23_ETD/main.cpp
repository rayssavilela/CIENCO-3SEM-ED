#include <iostream>

using namespace std;


struct data {
    int dia;
    int mes;
    int ano;

}hoje;

int main()
{
    data hoje;
    hoje.dia = 24;
    hoje.mes = 03;
    hoje.ano = 2023;

    cout << "Hoje e: " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;

}
