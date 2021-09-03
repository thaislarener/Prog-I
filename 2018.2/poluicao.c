// Programa: poluicao1.c
// Programador: Thaisla
// Data: 28/08/2018
// Este programa lê três níveis de poluição, leitura1, leitura2 e
// leitura3. A média dessas três leituras é usada como o índice de
// poluição da cidade, valores desse índice de poluição abaixo de 35
// indicam condição agradável, valores maiores ou iguais a 35 e menores
// ou iguais a 60 indicam condição desagradável, enquanto valores 
// maiores que 60 indicam condição perigosa.  O programa calcula o 
// índice de poluição e então determina e imprime a condição apropriada,
// agradável, desagradável ou perigosa.
#include<stdio.h> // scanf, printf
#include<string.h>
// declaração de tipos
typedef char string[40];

// início da função principal
int main(void) {
// declaração das variáveis locais
int     leitura1, leitura2, leitura3;  // três leituras de poluição
double	indice;                        // índice de poluição
string  mensagem;

// pré: leitura1 leitura2 leitura3

// Passo 1. Leia Leitura1, Leitura2, Leitura3
   printf("Entre com a primeira leitura de poluição: ");
   scanf("%d", &leitura1);
   printf("Entre com a segunda leitura de poluição: ");
   scanf("%d", &leitura2);
   printf("Entre com a terceira leitura de poluição: ");
   scanf("%d", &leitura3);
// Passo 2. Calcule o índice de poluição
   indice= (leitura1 + leitura2 + leitura3)/3.0;
// Passo 3. Compute a MSG apropriada
   if(indice<35)
   	strcpy(mensagem,"Condição agradável");
   if(indice>=35 && indice<=60)
   	strcpy(mensagem,"Condição desagradável");
   if(indice>60)
   	strcpy(mensagem,"Condição perigosa");
// Passo 4. Imprima o resultado apropriado
   printf("%s\n", mensagem);

   return 0;

// pós: indice == (Soma i em {1,2,3}:leitura[i])/3.0 &&
//      (indice < 35 && "Condição Agradável") || (indice <=60  && 
//      "Condição Desagradável") || (indice > 60 && "Condição Perigosa")
} // fim da função principal