#include <stdio.h>
#include <stdlib.h>

FILE *fx;
FILE *hx;

int g, f1, f2, i, j, k, l; // Contadores Globais para a Matriz
int m [32] [16] [40] [41];

int horario(), dia(), cadeira(), adcionar(), cidade(); // Declaração de Funções e Variavel Matriz Global

struct string{
       char origem [40];
       char destino [40];
       int hora;
       int minuto;
       int hora1;
       int minuto1;
       }str [30];
       
   


       
        

int main ()
{
    int counter;
    int y;
    for (f1=0; f1<30; f1++)
    str [f1].hora=30;
       
    
    
    if ((fx=fopen("traj_data.txt","r"))== NULL)
    {
    fx=fopen ("traj_data.txt", "w");
    fclose (fx);
    }
    else
    {
    fx=fopen ("traj_data.txt", "r");
    fclose(fx); 
}

     if ((hx=fopen("hour_data.txt","r"))== NULL)
    {
    hx=fopen ("hour_data.txt", "w");
    fclose (hx);
    }
    else{
    hx=fopen ("hour_data.txt", "r");
    fclose (hx);
}
    hx=fopen ("hour_data.txt", "r");
    fx=fopen ("traj_data.txt", "r");
    for (y=0; y<30; y++){
    fread (&str[y].origem, sizeof (char),40,fx);
    fread (&str[y].destino, sizeof (char),40,fx);
    }
    for (y=0; y<30; y++){
    fread (&str[y].hora, sizeof (int),1,hx);
    fread (&str[y].minuto, sizeof (int),1,hx);
    fread (&str[y].hora1, sizeof (int),1,hx);
    fread (&str[y].minuto1, sizeof (int),1,hx);
    }
    
    
    
    
    do {
    system ("cls"); // Comando para Limpar a Tela
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Escolha sua Opcao Digitando o Numero indicado\n\n");
    printf("1.Compra e Reserva de Passagem\n");
    printf("2.Adcionamento de Rotas e Horarios\n");
    printf("==========================================================\n");
    scanf("%d",&y);
    if (y==2)
    adcionar ();
    }
    while (y==2);
    do {
    
    l=cidade (); // Retorna a Posição Trajeto para a Matriz
    i=horario(); // Retorna a posição Horario para a Matriz
    j=dia(); // Retorna a posição Dia para a Matriz
    cadeira();
    
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Sua Compra foi realizada com Sucesso\n");
    printf("A Compra foi efetuada para\n\n");
    printf("O Trajeto: %d\n", l);
    printf("O Dia: %d\n", j);
    printf("O Horario: %d\n", i);
    printf("Na Cadeira: %d\n\n", k);
    printf("Continuar com Programa?\n");
    printf("Digite '1' para CONTINUAR ou '0' para SAIR\n");
    printf("==========================================================\n");
    scanf("%d", &counter);
}
while (counter==1);
    //***********SALVA ARQUIVO**********//
    for (y=0; y<30; y++){
    fwrite (&str[y].hora, sizeof (int),1,hx);
    fwrite (&str[y].minuto, sizeof (int),1,hx);
    fwrite (&str[y].hora1, sizeof (int),1,hx);
    fwrite (&str[y].minuto1, sizeof (int),1,hx);
    }
    
    for (y=0; y<=30;y++)
    {
    fwrite(&str[y].origem, sizeof(char),40,fx);
    fwrite(&str[y].destino, sizeof(char),40,fx);
    }
    
    
    fclose (fx);
    fclose (hx);
    
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n"); // Fecha e Salvamento do Arquivo
    printf("\t\t...SISTEMA FECHANDO...\n\n");
    printf("\t\t  ...VOLTE SEMPRE...\n\n");
    printf("==========================================================\n\n");
    
    

    system ("PAUSE");
    return 0;  
}

int cidade () // Função da Escolha da Cidade
{
    system ("cls");
      printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Escolha o Trajeto:\n\n"); 
    printf("1* Sao Jose >> Sao Paulo\n");
    printf("2* Sao Paulo >> Sao Jose\n");
    for (g=0;g<30;g++){
    if (str[g].origem[0]=='\0')
    printf("");
    else
    printf("%d* %s >> %s\n", g+3, str[g].origem, str[g].destino);
      
    
     }    
    printf("==========================================================\n");
    scanf ("%d", &f2);
}

int horario () //Função de Escolha de Horario
{
    int a;
        system ("cls");
      printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Entre com o Numero para a escolha do Horario:\n\n");
    printf("1* 8:00 as 14:00 \n");
    printf("2* 10:00 as 16:00 \n");
    printf("3* 13:00 as 19:00 \n");
    printf("4* 17:00 as 23:00 \n");
    printf("5* 20:00 as 2:00 \n\n");
    printf("6* 2:00 as 8:00 \n");
    printf("7* 4:00 as 10:00 \n");
    printf("8* 7:00 as 13:00 \n");
    printf("9* 11:00 as 17:00 \n");
    printf("10* 14:00 as 20:00 \n");
    for (f1=0; f1<30; f1++)
    if (str[f1].hora==30)
    printf ("");
    else
    printf ("%d* %d:%d as %d:%d\n", f1+11, str[f1].hora, str[f1].minuto, str[f1].hora1, str[f1].minuto1);    
    printf("==========================================================\n");
    do{
    scanf ("%d", &a);}
    while (a<0 || a>40);
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
    printf ("%d", m [l] [i] [j] [k]);
    k++;
    printf ("%d\t", m [l] [i] [j] [k]);
    k++;
    printf ("%d", m [l] [i] [j] [k]);
    k++;
    printf ("%d\n", m [l] [i] [j] [k]);
    }
   
    printf("\nAs Cadeiras contam de 1 a 40:\n");
    printf("Da Esquerda para Direita e do Topo para Baixo\n");
    printf("Locais com a variavel '1' ja estao alocados...\n"); 
    printf("==========================================================\n");
    
        scanf ("%d", &chair);
        }
        while (chair>40 || chair<1);
        k=chair;
        m [l][i][j][k]=1;
    return (chair);
    
    
}    

int adcionar () //Função de Adição de Trajetos e Horarios
{
    int d;
   system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf ("Escolha sua Opcao:\n\n");
    printf ("1* Adcionar Trajetos\n");
    printf ("2* Adcionar Horarios\n");
    printf("==========================================================\n");
    scanf ("%d", &d);
    
    if (d==1){
    
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Digite A Cidade de Origem: \n");
    fflush(stdin);
    gets (str[g].origem);   
    printf("\nDigite A Cidade Destino: \n");
    gets (str[g].destino);
    printf("==========================================================\n");
    g++;}
    
    else{
    f1=0;
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Digite Novo Horario \n\n");
    printf("==========================================================\n");
    printf("Hora:");
    do{
    scanf ("%d", &str[f1].hora);}
    while (str[f1].hora<0 || str[f1].hora>24);
    printf("Minuto:");
    do{
    scanf ("%d", &str[f1].hora);}
    while (str[f1].minuto<0 || str[f1].minuto>60);
    system ("cls");
    printf("==========================================================\n");
    printf("Sistema de Compra de Passagens Intermunicipais de Onibus\n\n\n\n\n");
    printf("Digite Novo Horario \n\n");
    printf("==========================================================\n");
    printf("Para as\nHora:");
    do{
    scanf ("%d", &str[f1].hora1);}
    while (str[f1].hora1<0 || str[f1].hora1>24);
    printf("Minuto:");
    do{
    scanf ("%d", &str[f1].minuto1);}
    while (str[f1].minuto1<0 || str[f1].minuto1>60);
    system ("cls");
    f1++;
    }
    
    

    
}
    
    
    
    
