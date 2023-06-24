#include <iostream>

using namespace std;

#define A 10
#define M 10

int main()
{
    int vetor1[A];
    int vetor2[M];
    int multi;

    cout << "DEFINA O MULTIPLICADOR: " << endl;
    cin >> multi;

    for(int i = 0; i < A; i++)
    {
        cout << "DEFINA UM NUMERO: " << endl;
        cin >> vetor1[i];

        vetor2[i] = vetor1[i] * multi;
    }
    for(int i = 0; i < A; i++)
    {
         cout << vetor1[i] << " * " << multi << " = " << vetor2[i] << endl;
    }






}
