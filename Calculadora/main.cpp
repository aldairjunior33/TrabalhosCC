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
		cout << "|       Escolha uma opera��o      |" << endl;
		cout << "|---------------------------------|" << endl;
		cout << "| 1 |   ADI��O                    |" << endl;
		cout << "| 2 |   SUBTRA��O                 |" << endl;
		cout << "| 3 |   MULTIPLICA��O             |" << endl;
		cout << "| 4 |   DIVIS�O                   |" << endl;
		cout << "| 5 |   SAIR                      |" << endl;
		cout << "-----------------------------------" << endl;
		
		cout << "Insira o numero da opera��o que desejar" << endl;
		cin >> op;
		
		switch (op){
			case 1:
				cout << " ===== ADI��O ===== " << endl;
				cin >> num1;
				cout << "+" << endl;
				cin >> num2;
			    cout << "A soma �: " << num1 + num2 << endl;
				break;
			case 2:
				cout << " ===== SUBTRA��O ===== " << endl;
				cin >> num1;
				cout << "-" << endl;
				cin >> num2;
			    cout << "A subtra��o �: " << num1 - num2 << endl;
				break;
			case 3:
				cout << " ===== MULTIPLICA��O ===== " << endl;
				cin >> num1;
				cout << "x" << endl;
				cin >> num2;
			    cout << "O produto �: " << num1 * num2 << endl;
				break;
			case 4:
				cout << " ===== DIVIS�O ===== " << endl;
				cin >> num1;
				cout << "/" << endl;
				cin >> num2;
			    cout << "O quociente �: " << num1 / num2 << endl;
				break;
			case 5:
				
				break;
		}
		
	}
	 
	
		
	
	return 0;
}
