#include <iostream>

using namespace std;

#define A 20
#define B 20
int main()
{
    int vetor1[A];
    int vetor2[B];

    for(int i = 0; i < A; i++)
    {
        cout << "Defina um numero: ";
        cin >> vetor1[i];
        vetor2[i] = vetor1[i];
    }
    cout << endl;

    for(int i = 19; i >= 0; i--)
    {
        cout << vetor2[i] << endl;
    }






}
