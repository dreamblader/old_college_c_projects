#include <stdio.h>
#include <stdlib.h>

int horario(), dia(), cadeira(), m [16] [11] [41], i, j, k; // Declaração de Funções e Variavel Matriz Global

int main ()
{
    int counter;
    char ch;
    m [16] [11] [41]=0;
    
    

    system ("cls"); // Comando para Limpar a Tela
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Aperte Enter para avancar...\n");
    printf("Escreva 's' para sair\n");
    printf("==========================================================\n");
    ch=getchar();
    if (ch=='s')
    exit(1);
    else
    do {
    {
    i=horario(); // Retorna a posição Horario para a Matriz
    j=dia(); // Retorna a posição Dia para a Matriz
    cadeira();
    }
    ch='/0';
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Sua Compra foi realizada com Sucesso\n");
    printf("A Compra foi efetuada para\n\n");
    printf("O Dia: %d\n", j);
    printf("O Horario: %d\n", i);
    printf("Na Cadeira: %d\n\n", k);
    printf("Continuar com Programa?\n");
    printf("Digite '1' para CONTINUAR ou '0' para SAIR\n");
    printf("==========================================================\n");
    scanf("%d", &counter);
}
while (counter==1);
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("\t\t...SISTEMA FECHANDO...\n\n");
    printf("\t\t  ...VOLTE SEMPRE...\n\n");
    printf("==========================================================\n\n");

    system ("PAUSE");
    return 0;  
}


int horario () //Função de Escolha de Horario
{
    int a;
        system ("cls");
      printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Entre com o Numero para a escolha do Horario:\n\n");
    printf("Saida: Sao Jose do Rio Preto\tDestino: Sao Paulo\n\n");
    printf("1* 8:00 as 14:00 \n");
    printf("2* 10:00 as 16:00 \n");
    printf("3* 13:00 as 19:00 \n");
    printf("4* 17:00 as 23:00 \n");
    printf("5* 20:00 as 2:00 \n\n");
    printf("Saida: Sao Paulo\tDestino: Sao Jose do Rio Preto\n\n");
    printf("6* 2:00 as 8:00 \n");
    printf("7* 4:00 as 10:00 \n");
    printf("8* 7:00 as 13:00 \n");
    printf("9* 11:00 as 17:00 \n");
    printf("10* 14:00 as 20:00 \n");
    printf("==========================================================\n");
    do{
    scanf ("%d", &a);}
    while (a<1 || a>10);
    return (a);
}


int dia () //Função de Escolha do Dia
{
    int day;
    do
    {
   system ("cls");
      printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Digite o numero de Dias para a Reserva de sua Passagem \n");
    printf("O Numero Maximo de Dias para Reserva e: 15\n");
    printf("PS:Caso desejar comprar na Hora Digite: '0'\n");    
    printf("==========================================================\n");
    scanf ("%d", &day);
    }
    while (day<0 || day>15);
    return (day);
}
    
    
int cadeira () //Função de Escolha da Cadeira
{
    int chair;
    do {
    system ("cls");
      printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Escolha a Cadeira:\n");
    
    for (k=1; k<40; k++)
    {
    printf ("%d", m [i] [j] [k]);
    k++;
    printf ("%d\t", m [i] [j] [k]);
    k++;
    printf ("%d", m [i] [j] [k]);
    k++;
    printf ("%d\n", m [i] [j] [k]);
    }
   
    printf("\nAs Cadeiras contam de 1 a 40:\n");
    printf("Da Esquerda para Direita e do Topo para Baixo\n");
    printf("Locais com a variavel '1' ja estao alocados...\n"); 
    printf("==========================================================\n");
    
        scanf ("%d", &chair);
        }
        while (chair>40 || chair<1);
        k=chair;
        m [i][j][k]=1;
    return (chair);
    
    
}    
    
    
    
    
