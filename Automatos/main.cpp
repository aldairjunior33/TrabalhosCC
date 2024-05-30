#include <iostream>

#define verde "\x1b[32m"
#define vermelho "\x1b[31m"
#define clean "\x1b[0m"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    /*Apresenta��o da express�o do grupo ao usu�rio*/
    cout<<"Express�o regular => 1(23)*(01)* "<<endl;

    /*Vari�vel que armazenar� a cadeia digitada pelo usu�rio*/
    string cadeia;
    cout<<"Digite uma cadeia: ";
    cin>>cadeia;

    /*Verifica o tamanho da string*/
    int tam;
    tam = cadeia.size();
    cout<<"Tamanho: "<<tam<<"\n\n";

    /*Controle de ind�ces do vetor (atual e sucessor a este)*/
    int i=0;
    int j=0;

    /*q0 -> q1*/
    if(cadeia[0] == '1'){
        cout<<verde<<cadeia[i]<<clean<<" ";
    }else{
        cout<<vermelho<<cadeia[i]<<clean<<" ";
    }

    /*Controle de parada caso haja algum erro*/
    bool teste = true;

    /*Emula o primeiro est�gio final q1*/
    if(tam > 1){

        /*pula para a posi��o 1 do vetor*/
        i++;

        /*Se v[i] = 2, ent�o q1 -> q2*/
        while(cadeia[i] == '2'){

            cout<<verde<<cadeia[i]<<clean<<" ";

            j = i + 1;

            /*q2 -> q4*/
            if(cadeia[j] == '3'){
                cout<<verde<<cadeia[j]<<clean<<" ";
            }else{
                cout<<vermelho<<cadeia[j]<<clean<<" ";
                teste = false;
            }
            i+=2;
        }

        /*Se v[i] = 0, ent�o q1 -> q3*/
        while(cadeia[i] == '0'){

            cout<<verde<<cadeia[i]<<clean<<" ";

            j = i + 1;
            
            /*q3 -> q5*/
            if(cadeia[j] == '1'){
                cout<<verde<<cadeia[j]<<clean<<" ";
            }else{
                cout<<vermelho<<cadeia[j]<<clean<<" ";
                teste=false;
            }

            i+=2;

            if(cadeia[i] == '2'){
                cout<<vermelho<<cadeia[i]<<clean<<" ";
                teste = false;
            }

        }

        /*Se para q1 -> q2 for diferente de 2 e q1 -> q3 for diferente de 0*/
        if(cadeia[i] != '2' && cadeia[i] != '0' && cadeia[i] != NULL){
            cout<<vermelho<<cadeia[i]<<clean<<" ";
            teste = false;
        }

    }

    if(teste){
        cout<<verde<<"\nCadeia aceita"<<endl;
    }else{
        cout<<vermelho<<"\nCadeia n�o aceita"<<endl;
    }

    return 0;
}
