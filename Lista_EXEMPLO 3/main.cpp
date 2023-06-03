#include <iostream>

using namespace std;

struct Node {
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

    if(*cabeca == nullptr)
    {
        *cabeca = novoNo;
        novoNo->proximo = novoNo;
    }
    else
    {
        novoNo->proximo = *cabeca;
        Node* atual = *cabeca;
        while(atual->proximo != *cabeca)
        {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
        *cabeca = novoNo;
    }
}

void removerNoInicio(Node** cabeca)
{
    if(*cabeca == nullptr)
    {
        cout << "Lista vazia. Nenhum no removido." << endl;
    }
    else if((*cabeca)->proximo == *cabeca)
    {
        delete *cabeca;
        *cabeca = nullptr;
        cout << "No removido. Lista vazia." << endl;
    }
    else
    {
        Node* atual = *cabeca;
        while(atual->proximo != *cabeca)
        {
            atual = atual->proximo;
        }
        atual->proximo = (*cabeca)->proximo;
        Node* temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        delete temp;
        cout << "No removido." << endl;
    }
}

void imprimirLista(Node* cabeca)
{
    if(cabeca == nullptr)
    {
        cout << "Lista Vazia." << endl;
        return;
    }
    cout << "Elementos da lista:";
    Node* atual = cabeca;

    do{
        cout << atual->dado << " ";
        atual = atual->proximo;
    }while(atual != cabeca);
    cout << endl;
}
int main()
{
    Node* cabeca = nullptr;

    inserirNoInicio(&cabeca, 3);
    inserirNoInicio(&cabeca, 5);
    inserirNoInicio(&cabeca, 7);

    imprimirLista(cabeca);

    removerNoInicio(&cabeca);

    imprimirLista(cabeca);

    return 0;
}
