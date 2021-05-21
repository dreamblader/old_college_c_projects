#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_NUMERIC, "pt_BR.utf8");

	int ing;
	float price, win;
	price=5.0;
	ing= 120;
	printf ("===========================================================================\n");
	printf ("||     Valor Ingresso   || Ingressos Vend. ||  Gastos   ||      Lucro    ||\n");
	for(price=5.0; price>=1.0; price-=0.5){ //Laço de Repetição para os Valores de R$ 5,00 a R$ 1,00 de 0,50 em 0,50 centavos
		printf ("==========================================================================\n");
		win=ing*price-200; // F�rmula Lucro 
		printf ("||     R$ %.2f          ||       %d       || R$ 200,00 ||   R$ %.2f   ||\n", price, ing, win );
		ing+=26; // Aumento de +26 ingressos a cada diminuição de preço
	}
	printf ("==========================================================================\n\n\n");

	setlocale(LC_ALL, NULL);

	return 0;	
}
