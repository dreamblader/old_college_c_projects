#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct cadastro
{
       char nome[100];
       char sobrenome[100];
       long int telefone;
};

void mergesort(int inicio,int fim) 
{ int i,j,k,m; struct cadastro *t; 
if (inicio==fim) return;// ordenacao recursiva das duas metades
m = (inicio+fim)/2;mergesort(inicio,m);mergesort(m+1,fim);// intercalacao no vetor temporario t
i = inicio;j = m+1;
k = 0;
t = (struct cadastro *) malloc(sizeof(struct cadastro) * (fim-inicio+1));
while(i<m+1 || j<fim+1) {if (i==m+1) { // i passou do final da primeira metade, pegar 
v[j]strcpy(t[k].nome,vetor2[j].nome);
j++; 
k++;} 
else if (j==fim+1) { // j passou do final da segunda metade, pegar
v[i]strcpy(t[k].nomecompleto,vetor2[i].nomecompleto);i++; k++;}
else 
 if (strcmp(vetor2[i].nomecompleto,vetor2[j].nomecompleto) < 0) { // v[i]<v[j], pegar 
 v[i]strcpy(t[k].nomecompleto,vetor2[i].nomecompleto);
 i++; 
 k++;} 
 else { // v[j]<=v[i], pegar 
 v[j]strcpy(t[k].nomecompleto,vetor2[j].nomecompleto);
 j++; 
 k++;}}// copia vetor intercalado para o vetor original
 for(i=inicio;i<=fim;i++)strcpy(vetor2[i].nomecompleto,t[i-inicio].nomecompleto);
 free(t);} 


int main()
{
      double tempi,tempf; 
      int registro,i,j,x;
      puts("Digite o numero de registros");
      scanf("%d",&registro);
      struct cadastro data[registro];
      FILE* arq;
      FILE* arq2;
      arq=fopen("nome.txt","r");
      for(j=1;j<=registro;j++)
      {
      srand(time(NULL));
      x=1+ (rand() % 300);
      for(i=1;i<=x;i++)
      {                
      fscanf(arq,"%s",data[j].nome);
      }
      }
      fclose(arq);
      arq2=fopen("sobrenome.txt","r");
      for(j=1;j<=registro;j++)
      {
      srand(time(NULL));
      x=1+ (rand() % 4000);
      for(i=1;i<=x;i++)
      {                
      fscanf(arq2,"%s",data[j].sobrenome);
      }
      }
      fclose(arq2);
      for(i=1;i<=registro;i++)
      {
         data[i].telefone=10000000 + (rand() % 99999999);
         }
      for(i=1; i<=registro; i++)
      {
         strcat(data[i].nome, " ");
         strcat(data[i].nome, data[i].sobrenome);      
         printf("%s - %ld\n", data[i].nome, data[i].telefone);
      }
      tempi=clock();
      mergesort(data,registro);
      tempf=clock();
      printf ("\nNomes Ordenados: \n");
      for(i=1; i<=registro; i++){
          printf("%s \n",data[i].nome);
          }
      printf("O tempo de execucao: %f",tempf-tempi);    
      system("PAUSE");
      return 0;
         } 
           
                                      
      
                                      

      
      
      
      
      
      
      
