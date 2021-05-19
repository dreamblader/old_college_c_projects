#include <stdio.h>

int main ()
{
	int ing;
	float price, win;
	price=5.0;
	ing= 120;
	printf ("===============================================================================\n");
	printf ("||     Valor Ingresso   || Ingressos Vend. ||  Gastos   ||      Lucro    ||\n ");
	for(price=5.0; price>=1.0; price-=0.5){ //Laço de Repetição para os Valores de R$ 5,00 á R$ 1,00 de 0,50 em 0,50 centavos
		printf ("===============================================================================\n");
		win=ing*price-200; // Fórmula Lucro 
		printf ("||     R$ %f      ||       %d       || R$ 200,00 || R$ %f ||\n", price, ing, win );
		ing+=26; // Aumento de +26 ingressos á cada diminuição de preço
	}
	printf ("===============================================================================\n\n\n");
	system ("PAUSE");
	return 0;
	
}
