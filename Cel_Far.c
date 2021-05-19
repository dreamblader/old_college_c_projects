#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cel [500], far [500], i;
    char resp;
    i=0;
    do 
    {  
       printf ("Digite a temperatura %d:", i+1);
       scanf ("%d", cel[i]);
       printf ("Deseja encerrar a insercao de dados?\n [s] Sim [n] Nao\n");
       resp=getch ();
       i++;
    }
    while (resp!='s' || i <=500); 
       
        
    printf ("Celsius\tFahrenheit\n");
    for (i=0; i<=500; i++)
    {
        far [i] = (cel [i]+32)*9/5;
        printf ("%d\t%d\n", cel [i], far [i]);
    }
        
  
  system("PAUSE");	
  return 0;
}
