#include <iostream>

using namespace std;

int main()
{

    int x;
    int *ptr;
    ptr = &x;

    cout << "O endere�o de x �: \n" << ptr << endl;
    *ptr = 80;
    cout << "O conteudo de ptr \n" << *ptr << endl;

    return 0;
}
