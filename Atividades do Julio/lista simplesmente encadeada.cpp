#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;
 
// Vamos primeirp definior uma estrutura de dados
typedef struct lista {
	int num;
	struct lista *prox;
}lista;
// será o nome do nosso typedf.
int main() {
	int a;
	lista *inicio,*fim;
	
		cout << "Insira um numeros inteiro na lista no inicio:" << endl;
		cout << "Aperte 0 para mostrar lista:" << endl;
		
		inicio=(lista *)malloc(sizeof(lista));
 		if (inicio==NULL) 
	 	return 0; 
		fim = inicio;
	while(1)	
		{
		cin >>  fim -> num;
			if (fim -> num == 0) 
			break;
			fim-> prox = (lista*)malloc(sizeof(lista));
			if (fim -> prox == NULL) 
			return 0;
			fim = fim -> prox;
		}
			fim -> prox = NULL;
			fim = inicio; 
	while (fim -> prox != NULL)
		{
		cout << fim -> num << "  ";
			fim = fim -> prox;
		}
	cout<< "Informe o valor a ser excluido" << endl;
	cin >> a ;
	
	return 0;
}
