#include <iostream>

using std::cout;
using std::cin;
using std::endl;


typedef struct lista{
    int info;
    struct lista *proximo;
} lista;

lista *criarElemento(int info){
    lista *no = (lista*) malloc(sizeof (lista));
    if (no == NULL){
    return NULL;
    }
    no->info = info;
    no->proximo = NULL;
 return no;
}

/*
void inserir(int num, int novo){

    novo = malloc(sizeof);
    novo -> valor = num;
}
     if (NULL){
        inicio = novo;
        novo *prox = NULL;
    } else {
        novo *prox = inicio;
        inicio = novo;
    }
    */

int main()
{

    return 0;
}
