#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	
	//tipos de variaveis 
	int a ;
	float b ;
	char c ;
	bool d ;
	
	a = 3;
	b = 3,4;
	c = 'a';
	d = true;

	printf ("\n a = %d", a);
	printf ("\n b = %.1f", b);
	printf ("\n c = %c", c);
	printf ("\n d = %d", d);

	
	printf ("\n Numero inteiro:");
	scanf (" %d", &a);
	printf ("\n Numero nao inteiro:");
	scanf (" %f", &b);
	printf ("\n letra:");
	scanf (" %c", &c);
	scanf (" %d", &d);	

	printf ("\n O valor de A e B : %d, %.1f", a, b);
	printf ("\n A letra de C: %c", c);
	printf ("\n verdadeiro : %d", d);

	
	return 0;
}
