#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	  setlocale(LC_ALL, "Portuguese");

	
	
	float num1, num2;
	int op;
	
	printf (        "\n       **** CALCULADORA **** \n "   );
	printf ("\n       ----------------------"  );
	printf ("\n       | 1 |- Soma          |\n");
	printf ("\n       | 2 |- Subtra��o     |\n");
	printf ("\n       | 3 |- Multiplica��o |\n");
	printf ("\n       | 4 |- Divis�o:      |\n");
	printf ("\n       | 0 |- sair:         |\n");
	printf ("\n       ----------------------"  );

	
	printf ("\n Escolha a opera��o que deseja usar:  '+' '-' '*' '/' \n ");
	scanf ("%d", &op);
	
	switch (op){
		case 1 :
			scanf (" %f", &num1);
			printf (" + \n");
			scanf ("%f", &num2);
			printf ("A soma dos numeros %f e %f = %.1f",num1, num2, num1 + num2 );
			break;
			
		case 2 :
			scanf (" %f", &num1);
			printf (" - \n");
			scanf ("%f", &num2);
			printf ("A subtra��o dos numeros %f e %f = %.1f",num1, num2, num1 - num2 );
			break;
			
		case 3 :
			scanf (" %f", &num1);
			printf (" x \n");
			scanf ("%f", &num2);
			printf ("o produto dos numeros %f e %f = %.1f",num1, num2, num1 * num2 );
			break;
			
		case 4 :
			scanf (" %f", &num1);
			printf (" / \n");
			scanf ("%f", &num2);
			printf ("o quociente dos numeros %f e %f = %.1f",num1, num2, num1 / num2 );
			break;
		case 0 : 
			printf ("Fechar prograna");
		getch(); 

			
			
	}	
		
	return 0;
}
