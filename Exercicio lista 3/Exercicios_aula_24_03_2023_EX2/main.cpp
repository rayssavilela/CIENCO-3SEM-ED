#include <iostream>
#include <string>
using namespace std;

typedef struct animal
{
    string nomeanimal;
    string especie;
    int idadeanimal;
    float pesoanimal;
}Animal;

typedef struct listaanimal
{
    Animal lista;

}ListaAnimal;

int main()
{
    ListaAnimal cadastro[2];

    for(int i = 0; i < 2; i++)
    {
        cout << "Digite o nome do animal: " << endl;
        getline(cin, cadastro[i].lista.nomeanimal);

        cout << "Digite a especie do animal: " << endl;
        getline(cin, cadastro[i].lista.especie);

        cout << "Digite a idade do animal: " << endl;
        cin >> cadastro[i].lista.idadeanimal;

        cout << "Digite o peso do animal: " << endl;
        cin >> cadastro[i].lista.pesoanimal;

        cin.ignore();
    }

    cout << "Nome" << "\t" << "Especie" << "\t" << "Idade" << "\t" << "Peso" << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << cadastro[i].lista.nomeanimal << "\t" << cadastro[i].lista.especie << "\t";
        cout << cadastro[i].lista.idadeanimal << "\t" << cadastro[i].lista.pesoanimal << endl;
    }
}
