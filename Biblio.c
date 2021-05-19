#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    FILE *dat;
    int tim, day, enter;
    
    do
    {
    system ("cls");
    printf("===================================================================\n");
    printf("Voce Tem algum Livro Pendente?\n\n");
    printf("1* SIM\n");
    printf("2* NAO\n");
    printf("===================================================================\n");
    do{
    scanf("%d", &enter);
}
 while(enter>2 || enter<1);
    
    switch (enter)
    { case 1: run(); break;
      case 2: break;
        }
        system ("cls");
        printf("===================================================================\n");
    printf("Seu Tempo de Inutilizacao e de: %d\n\n", tim);
    printf("Mudou de ideia?\n");
    printf("1* SIM\n");
    printf("2* NAO\n");
    printf("===================================================================\n");
      do{
    scanf("%d", &enter);
}
 while(enter>2 || enter<1);
 
} //retorna programa
while(enter!=2);
    
system ("PAUSE");
return 0;
}

int run ()
{
    return 0;
}
