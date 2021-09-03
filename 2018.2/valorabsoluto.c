// Programa: valorabsoluto.c
// Programador:Thaisla
// Data: 05/09/2018
// Este programa lê um número de ponto flutuante, calcula o valor
// absoluto e imprime o resultado
// Declaração das bibliotecas utilizadas
#include<stdio.h>

// início da função principal
int main(void) {
// declaração das variáveis locais
double x, absx;

// pré: x

// Passo 1. Leia o número de entrada
	scanf("%lf", &x);
// Passo 2. Calcule o valor absoluto 
	if(x<0)
		absx= x*(-1);
	else 
		absx= x;
// Passo 3. Imprima o resultado
   printf("|%.1f| == %.1f\n", x, absx);  

   return 0;

// pós: absx == x && x >= 0 || absx == -x
} // fim da função principal
