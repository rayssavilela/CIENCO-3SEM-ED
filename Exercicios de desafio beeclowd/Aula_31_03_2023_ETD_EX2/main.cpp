#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    double delta;
    double x1;
    double x2;

    cout << "Defina o valor de A: ";
    cin >> a;

    cout << "Defina o valor de B: ";
    cin >> b;

    cout << "Defina o valor de C: ";
    cin >> c;

    delta = ((b * b) - 4 * a * c);

    if((delta <= 0) || (a == 0))
       {
           cout << "Impossivel Calcular";
       }
    else if (delta > 0)
       {
           x1 = (((b * -1) + sqrt(delta)) / (2 * a));
           x2 = (((b * -1) - sqrt(delta)) / (2 * a));

           cout << "x1 = " << x1 << endl;
           cout << "x2 = " << x2 << endl;
       }






}
