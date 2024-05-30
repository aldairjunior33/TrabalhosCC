#include <iostream>

using namespace std;

int main()
{
    int *v;

    v = new int [10];

    v[0]=10;
    v[2]=11;
    v[3]=12;
    v[4]=13;
    v[5]=14;
    v[6]=15;
    v[7]=17;
    v[8]=18;
    v[9]=19;

    for(int i=0; i<10 ; ++i){
            cout << "v["<< i <<"]" << v[i]<< endl;
    }
    cout << "Endereço de 'v': " << v << endl;
  delete[] v;

    return 0;
}
