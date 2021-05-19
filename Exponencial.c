#include <stdio.h>
#include <stdlib.h>

main ()
{
     long int x, y, z;
     z=1;
     printf ("Digite o Numero a ser elevado:\t");
     scanf ("%ld", &x);
     printf ("\nQuantas vezes deseja eleva-lo?\t");
     scanf ("%ld", &y);
     
     if (y<0)
     {printf ("\nCalculo Invalido\n\n");
     system ("PAUSE");
     return 0;}
         
     for (y; y>0; y--,z*=x) // Decresse Y e Multiplica Z
     	printf (""); // Somente para o laço executar "algo"
      
     printf ("\nResultado: %ld\n\n", z);
     system ("PAUSE");
     return 0;
}
