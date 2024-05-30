// C++ program for implementation of Heap Sort 
#include <iostream> 
#include <cstdlib> // srand(),rand().
#include <time.h> //time(), clock().


using namespace std; 

void criarheap(int vetor[], int n, int i) 
{ 
	int raiz = i; // iniciamos com a raiz sendo o maior numero
	int esq = 2 * i + 1;
	int dir = 2 * i + 2; 

	// Se o filho esquerdo for maior que a raiz
	if (esq < n && vetor[esq] > vetor[raiz]) 
		raiz = esq; 

	// se o filho da direita continuar sendo o maior
	if (dir < n && vetor[dir] > vetor[raiz]) 
		raiz = dir; 

	// Se o maior não for raiz

	if (raiz != i) { 
		swap (vetor[i], vetor[raiz]); //trocar
		
		criarheap(vetor, n, raiz); 
	} 
} 


void heapSort(int vetor[], int n) 
{ 

	for (int i = n / 2 - 1; i >= 0; i--) 
		criarheap(vetor, n, i); 

	for (int i = n - 1; i >= 0; i--) { 
		
		swap (vetor[0], vetor[i]); //troca a raiz atual para o final

		 
		criarheap(vetor, i, 0); 
	} 
} 

void printArray(int vetor[], int n) 
{ 
	
	for (int i = 0; i < n; ++i) 
		cout << vetor[i] << " "; 
	cout << "\n"; 
} 


int main() 
{ 
	int vetor [1000];
	int m = 1000;
	srand (time (NULL));
	
	for (int i =0; i<m; i++){
		vetor [i] = rand ()% 1000;
	}
	int n = sizeof(vetor) / sizeof(vetor[0]); 

	heapSort(vetor, n); 

	cout << "Os vetores ordenados são: \n"; 
	printArray(vetor, n); 
} 

