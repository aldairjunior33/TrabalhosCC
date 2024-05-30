#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

typedef struct no No;
struct no
{
    int num;
    struct no *prox;
};

// a função malloc retorna um ponteiro do tipo void que indica o endereço
// de memoria do novo elemento do tamanho do tipo No
No* criar_no()
{
    No novo = (No)malloc(sizeof(No));
    return novo;
}

No* inserir_no_inicio(No* Lista, int dado)
{
    No *novo_no = criar_no();
    novo_no -> num = dado;

    if(Lista == NULL)
    {
        Lista = novo_no;
        novo_no -> prox=NULL;
    }
    else
    {
        novo_no->prox=Lista;
        Lista=novo_no;
    }
    return Lista;
}

No* inserir_no_final(No *Lista, int dado)
{
    No *no = criar_no();
    no -> num = dado;

    if(Lista == NULL)
    {
        no->prox=NULL;
        Lista=no;
    }
    else   // aponta o ultimo elemento da lista //
    {
        // o auxiliar aponta para o primeiro elemento da lista //
        No* aux = Lista;
        // o auxiliar percorre a lista para no ultimo elemento //
        while(aux->prox!=NULL)
        {
            aux = aux -> prox;
        }

        no -> prox = NULL;
        aux-> prox = no;
    }
}




void imprimir_lista(No* Lista)
{
    No *viewer=Lista;

    while(viewer != NULL)
    {
        cout << " " << viewer->num;
        viewer = viewer -> prox;

    }
}


int main()
{
    // Lista é a referencia para o primeiro elemento
    No *Lista = NULL;

    int check = 0;
    while( check == 0)
    {
        int op;
        cout << "\nDigite uma opção: (Digite o numero da operação)\n";
        cout << "1. Inserir\n2. Excluir\n3. Pesquisa\n4. Limpar\n5. Sair\nOpção: ";
        cin >> op;
        if(op == 1)
        {
            cout << "\n1. Inserir no inicio\n2. Inserir no final\nOpcao: ";
            cin >> op;
            if(op == 1)
            {
                cout << "\nDigite um numero inteiro: ";
                int dado;
                cin >> dado;
                Lista = inserir_no_inicio(Lista, dado);
            }
            if(op == 2)
            {
                cout << "\nDigite um numero inteiro: ";
                int dado;
                cin >> dado;
                Lista = inserir_no_final(Lista, dado);
            }
            imprimir_lista(Lista);
        }
        if(op == 2)
        {
            cout << "\nQual elemento deseja excluir?: \n";

        }
        if(op == 3)
        {
            cout << "\nQue elemento deseja encontrar?: \n";
        }
        if(op == 4)
        {
            cout << "\nQue elemento deseja limpar?: \n";
        }
        if(op == 5)
        {
            int sair;
            cout << "\n====================\n" << "Tem certeza? (Digite 1 ou 2) \n1. Sim\n2. Nao\nOpção:";
            cin >> sair;
            if(sair == 1)
            {
                check = 1;
                cout << "Saiu\n";
            }
            else if(sair == 2)
            {
                check = 0;
            }
        }
    }

    return 0;
}
