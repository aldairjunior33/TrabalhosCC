#include <iostream>

using namespace std;

int main()
{
   int *ptr_a;

   ptr_a = new int;
    if (ptr_a == NULL)
        {
        cout << " Memoria insuficiente " << endl;

        }
    cout << "O endereço de ptr_a: " << ptr_a << endl;
    *ptr_a = 90;
    cout << "O conteudo de ptr_a: " << *ptr_a << endl;
    delete ptr_a;

    return 0;

}
