#include <iostream>

using namespace std;

struct Node{

    int dado;
    Node* anterior;
    Node* proximo;

};

Node* criarNO(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->anterior = nullptr;
    novoNo->proximo = nullptr;

    return novoNo;
}

void inserirnoInicio(Node** cabeca, int dado)
{

Node* novoNo= criarNO(dado);

novoNo->proximo = *cabeca;

if(*cabeca != nullptr)
{
    (*cabeca) -> anterior = novoNo;
}
*cabeca = novoNo;
}

void removerNo(Node** cabeca, int dado)
{
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }
    if((*cabeca) -> dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca) -> proximo;
        if(*cabeca != nullptr)
        {
            (*cabeca) -> anterior = nullptr;
        }
        delete temp;

        cout << "No removido." << endl;
        return;
    }

    Node* atual = *cabeca;
    while(atual != nullptr && atual -> dado != dado)
    {
        atual = atual -> proximo;
    }

    if(atual != nullptr)
    {
        if(atual->anterior != nullptr)
        {
            atual->anterior->proximo = atual->proximo;
        }
        if(atual->proximo != nullptr)
        {
            atual->proximo->anterior = atual->anterior;
        }
        delete atual;

        cout << "No removido." << endl;
    }
    else
    {
        cout << "No nao encontrado na lista." << endl;
    }
}

void imprimirLista(Node* cabeca)
{
    cout << "Elementos da lista; ";
    while (cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}


int main()
{
    Node* cabeca = nullptr;

    inserirnoInicio(&cabeca, 3);
    inserirnoInicio(&cabeca, 5);
    inserirnoInicio(&cabeca, 7);

    imprimirLista(cabeca);

    removerNo(&cabeca, 5);

    imprimirLista(cabeca);

    return 0;
}
