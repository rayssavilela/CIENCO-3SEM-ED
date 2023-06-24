#include <iostream>

using namespace std;


struct Node{
int dado;
Node* proximo;
};

Node* criarNo(int dado)
{
    Node* novoNo = new Node;
    novoNo->dado = dado;
    novoNo->proximo = nullptr;
    return novoNo;
}

void inserirNoInicio(Node** cabeca, int dado)
{
    Node* novoNo = criarNo(dado);

    novoNo->proximo = *cabeca;

    *cabeca = novoNo;
}

void removerNo(Node** cabeca, int dado)
{
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido." << endl;
        return;
    }
    if((*cabeca)->dado == dado)
    {
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;

        delete temp;

        cout << "No removido." << endl;
        return;
    }
    Node* anterior = *cabeca;
    Node* atual = (*cabeca)->proximo;
    while(atual != nullptr && atual->dado != dado)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if(atual != nullptr)
    {
        anterior->proximo = atual->proximo;

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
    cout << "Elementos da lista: ";
    while(cabeca != nullptr)
    {
        cout << cabeca->dado << " ";
        cabeca = cabeca->proximo;
    }
    cout << endl;
}
int main()
{
    Node* cabeca = nullptr;

    inserirNoInicio(&cabeca, 10);
    inserirNoInicio(&cabeca, 20);
    inserirNoInicio(&cabeca, 30);

    imprimirLista(cabeca);

    removerNo(&cabeca, 20);

    imprimirLista(cabeca);



    return 0;
}
