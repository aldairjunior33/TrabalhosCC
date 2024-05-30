#include <iostream>
#include <locale>

using std::cout;
using std::cin;
using std::endl;

    int main()
	 {
    	setlocale(LC_ALL, "Portuguese");
	
		float num1, num2;
		
	int menu (); 
	{
	
		int op;
		
		cout << "   ======= Calculadora ======      " << endl;
		cout << "__________________________________ " << endl;
		cout << "|       Escolha uma operação      |" << endl;
		cout << "|---------------------------------|" << endl;
		cout << "| 1 |   ADIÇÃO                    |" << endl;
		cout << "| 2 |   SUBTRAÇÃO                 |" << endl;
		cout << "| 3 |   MULTIPLICAÇÃO             |" << endl;
		cout << "| 4 |   DIVISÃO                   |" << endl;
		cout << "| 5 |   SAIR                      |" << endl;
		cout << "-----------------------------------" << endl;
		
		cout << "Insira o numero da operação que desejar" << endl;
		cin >> op;
		
		switch (op){
			case 1:
				cout << " ===== ADIÇÃO ===== " << endl;
				cin >> num1;
				cout << "+" << endl;
				cin >> num2;
			    cout << "A soma é: " << num1 + num2 << endl;
				break;
			case 2:
				cout << " ===== SUBTRAÇÃO ===== " << endl;
				cin >> num1;
				cout << "-" << endl;
				cin >> num2;
			    cout << "A subtração é: " << num1 - num2 << endl;
				break;
			case 3:
				cout << " ===== MULTIPLICAÇÃO ===== " << endl;
				cin >> num1;
				cout << "x" << endl;
				cin >> num2;
			    cout << "O produto é: " << num1 * num2 << endl;
				break;
			case 4:
				cout << " ===== DIVISÃO ===== " << endl;
				cin >> num1;
				cout << "/" << endl;
				cin >> num2;
			    cout << "O quociente é: " << num1 / num2 << endl;
				break;
			case 5:
				
				break;
		}
		
	}
	 
	
		
	
	return 0;
}
