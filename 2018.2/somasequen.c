// Programa: somasequencia00.c
// Programador: Thaisla
// Data: 13/09/2018
// Este programa lê dois números inteiros, inicio e fim e computa a
// soma dos números inteiros entre inicio e fim.
// declaração das bibliotecas utilizadas
#include<stdio.h>

// início da função principal
int main(void) {
// declaração das variáveis locais	
int inicio, fim;
int soma=0, i;

// pré: inicio fim

// Passo 1. Leia a entrada
	scanf("%d %d", &inicio, &fim);
// Passo 2. Compute a soma da sequência
	for(i=inicio; i<=fim; i++)
		soma+=i;
// Passo 3. Imprima o valor da soma da sequência                     
   printf("%d\n", soma);
   
  return 0;

// pós: soma == soma i em {inicio,..., fim}:i
} // fim da função principal