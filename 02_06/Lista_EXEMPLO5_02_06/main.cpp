#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> minhaLista;

    minhaLista.push_back(10);
    minhaLista.push_front(20);
    minhaLista.insert(next(minhaLista.begin()), 30);

    cout << "Elementos da lista: ";
    for(list<int>::iterator it = minhaLista.begin(); it != minhaLista.end(); ++it)
    {
        cout << *it << " ";
    }

    cout << endl;

    list<int>::iterator it = minhaLista.begin();
    advance(it, 1);
    minhaLista.erase(it);

    cout << "Tamanho da lista: " << minhaLista.size() << endl;
    cout << "Lista vazia? " << (minhaLista.empty() ? "Sim" : "Nao") << endl;

    cout << "Primeiro elemento: " << minhaLista.front() << endl;
    cout << "Ultimo elemento: " << minhaLista.back() << endl;

    minhaLista.clear();

    cout << "Tamanho da lista apos a limpeza: " << minhaLista.size() << endl;
    return 0;
}
