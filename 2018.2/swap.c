// Programa: swap.c
// Programador:Thaisla
// Data: 14/11/2018
// Programa para testar funções
// declaração das bibliotecas utilizadas
#include<stdio.h>

// declaração das funções
void swap(int*, int*);

// início da função principal
int main(void) {
// declaração das variáveis locais
int  a, b;

// pré: input == umInt1 umInt2

// Passo 1. Leia os dados
   scanf("%d %d", &a, &b);
// Passo 2. Troque o valor de a por b e b por a
   swap(&a, &b);
// Passo 3. Imprima os resultados
   printf("%d %d\n", a, b);

   return 0;

// pós: b a
} // fim da função principal

// Função: swap
// Programador: Thaisla
// Data: 14/11/2018
// O Diálogo: Esta função troca o valor de duas variáveis do tipo int
void swap(int* a, int* b) {
// declaração das variáveis locais
	int aux=0;

	aux = *b;
	*b = *a;
	*a = aux;

	return;
// pós: output == a == UmInt2 && b == UmInt1
} // fim da função Swap
