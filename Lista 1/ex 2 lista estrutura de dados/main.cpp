#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Determine a sua idade atual: ";
    cin >> idade;

    if ((idade >= 5) && (idade <= 7))
    {
        cout << "Categoria infantil A pois possue " << idade << endl;
    }
    else if ((idade >= 8) && (idade <= 10))
    {
        cout << "Categoria infantil B pois possue " << idade << endl;
    }

    else if ((idade >= 11) && (idade <= 13))
    {
        cout << "Categoria juvenil A pois possue " << idade << endl;
    }
    else if ((idade >= 14) && (idade <= 17))
    {
        cout << "Categoria juvenil B pois possue " << idade << endl;
    }

    else if (idade > 17)
    {
        cout << "Categoria Senior pois possue " << idade << endl;
    }

    else
    {
        cout << "Sem categoria pois possue " << idade << endl;
    }


}
