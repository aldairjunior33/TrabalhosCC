#include<stdio.h>

void Quick(int v[tam], int inicio, int fim);
int main(){
   
   int vetor[tam];
   
   int i;   
   printf("Vetor desordenado:\n");
   for(i = 0; i < tam; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
   
   Quick(vetor, 0, 9);
   
   printf("Vetor ordenado:\n");
   for(i = 0; i < tam; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}

void Quick(int v[tam], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

}
