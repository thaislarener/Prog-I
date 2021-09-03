// Programa: digitos.c
// Programador: Thaisla
// Data: 23/08/2018
// Este programa lê um número inteiro e computa a soma dos 
// dois digitos menos significativos do numero
// Declaração das biliotecas utilizadas
#include<stdio.h> // printf
// início da função principal
int main(void) { 
// Declaração das Variáveis Locais
int numero;
int resto1=0, resto2=0;
int soma;

// pré: numero

// Passo 1. Leia o numero
	scanf("%d", &numero);
// Passo 2. Guarde os dois digitos menos significativos
	resto1= numero%10;
	numero= numero/10;
	resto2= numero%10;
// Passo 3. Compute a soms dos digitos
	soma= resto1 + resto2;
// Passo 3. Imprima os resultado
   printf("%d \n", soma);

   return 0;

// pós: soma= resto1 + resto2
} // fim da função principal