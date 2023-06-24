#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    /* empty = vazio
    size = tamanho
    front = frente
    back = atras
    push = empurrar
    pop */

    int clientes = 0;
    string nome;

    queue<string> pessoas;
    queue<string> aux;

    do
    {
        cout << "1- Inserir cliente na fila;" << endl;
        cout << "2- Atender cliente na fila;" << endl;
        cout << "3- Exibir fila de espera;" << endl;
        cout << "4- Encerrar registros;" << endl;
        cin >> clientes;

        switch(clientes)
        {
        case 1:
        {
            cout << "NOME: ";
            cin >> nome;

            pessoas.push(nome);
        }
        break;

        case 2:
        {
            cout << "Atendendo cliente; " << endl;
            cout << pessoas.front() << endl;
            pessoas.pop();
        }
        break;

        case 3:
        {
            cout << "Atualmente temos: " << pessoas.size() << " na fila;" << endl;
            if(!pessoas.empty())
            {
                aux = pessoas;
            }
            while(!aux.empty())
            {
                cout << aux.front() << endl;
                aux.pop();
            }
        }
        break;
        }
    }while(clientes != 4);
}
