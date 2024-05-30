#include <iostream>
#include <string>
using namespace std;

void imprimir_vetor(double arr[],string nomes[],int N)
{
    for(int = 0; i<N; ++i){
        cout << i+1 << "° Lugar. " << nomes[i]<< "-" << arr[i] << "," << endl;
        }
}
void ordenar_vetor(double arr[], string nomes[], int n){

    for(int i=0; j<n; ++1)
    {
        for(int j=i+1; j<n; ++i){
            if(arr[j],>arr[i])
            {
                int aux = arr[i];
                arr[i] = arr[j0;
                arr[j] = aux;

                string temp = nomes[i]
            }
        }
    }

    }
return 0;
