#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double x = 0;
    double vetorN[100];

    cout << "Defina o valor de X: ";
    cin >> x;

    vetorN[0] = x;

    for(int i = 0; i < 100; i++)
    {
        vetorN[i] = x;
        x = x / 2;
        cout << fixed << setprecision(4);

    }

    for(int i = 0; i < 100; i++)
    {
        cout << "N [" << i << "]" << " = " << vetorN[i] << endl;
    }





}
