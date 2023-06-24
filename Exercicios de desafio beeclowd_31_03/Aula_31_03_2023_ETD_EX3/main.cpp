#include <iostream>
#include <string>

using namespace std;


int main()
{
    string x;
    string y;
    string z;

    cout << "Defina o tipo de animal: ";
    getline(cin, x);

    cout << "Defina sua especie: ";
    getline(cin, y);

    cout << "Defina sua alimentacao: ";
    getline(cin, z);

    cin.ignore();

    if((x == "vertebrado") && (y == "ave") && (z == "carnivoro"))
    {
        cout << "aguia";
    }
    else if((x == "vertebrado") && (y == "ave") && (z == "onivoro"))
    {
        cout << "pomba";
    }
    else if((x == "vertebrado") && (y == "mamifero") && (z == "onivoro"))
    {
        cout << "homem";
    }
    else if((x == "vertebrado") && (y == "mamifero") && (z == "herbivoro"))
    {
        cout << "vaca";
    }
    else if((x == "invertebrado") && (y == "inseto") && (z == "hematofago"))
    {
        cout << "pulga";
    }
    else if((x == "invertebrado") && (y == "inseto") && (z == "herbivoro"))
    {
        cout << "lagarta";
    }
    else if((x == "invertebrado") && (y == "anelideo") && (z == "hematofago"))
    {
        cout << "sanguessuga";
    }
    else if((x == "invertebrado") && (y == "anelideo") && (z == "onivoro"))
    {
        cout << "minhoca";
    }

}
