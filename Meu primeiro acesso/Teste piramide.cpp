#include <iostream>

using namespace std;

int main(){

int tam;

cout << "Digite um numero inteiro: " << endl;
cin >> tam;

for(int i=0, k=tam; i<tam; i++, k--){
   for(int j=0; j<tam; j++){
      if(j>=k){
         cout << j+1;
      }else{
         cout << " ";
      }
   }
   for(int j=tam; j>1; j--){
      if(j<=i){
         cout << j;
      }else{
         cout << " ";
      }
   }
   cout << endl;
}

return 0;
}
