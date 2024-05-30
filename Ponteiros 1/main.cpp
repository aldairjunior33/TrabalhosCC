#include <iostream>

using namespace std;

int main()
{

    int x;
    int *ptr;
    ptr = &x;

    cout << "O endereço de x é: \n" << ptr << endl;
    *ptr = 80;
    cout << "O conteudo de ptr \n" << *ptr << endl;

    return 0;
}
