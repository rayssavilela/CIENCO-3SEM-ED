#include <iostream>

using namespace std;

int main()
{

    cout << "Os numeros multiplos de 5 entre 1 a 500 sao: " << endl;
    for(int i = 1; i <= 500; i++)
    {
        if(i % 5 == 0)
        {
            cout << i << endl;
        }
    }
}
