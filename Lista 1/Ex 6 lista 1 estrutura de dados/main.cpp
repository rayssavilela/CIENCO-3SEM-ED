#include <iostream>

using namespace std;

int main()
{

    cout << "No intervalo de 1 ate 20 temos esses valores: " << endl;
    for(int i = 1; i <= 20; i++)
    {
        int quadrado = i * i;
        cout << i << " * " << i << " = " << quadrado << endl;
    }
}
