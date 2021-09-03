// Programa: mdc.c
// Programador: Thaisla
// Data: 13/09/2018
// Este programa um lê conjunto de dois números inteiros computa
// o MDC usando o algoritmo de Euclides.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdlib.h> // abs

// início da função principal
int main(void) {
// declaração das variáveis locais
int  a, b, num1, num2, resto;

// pré: a b

// Passo 1. Leia os inteiros
	scanf("%d %d", &a, &b);
// Passo 2. Inicialize as variáveis
	num1= a;
	num2= b;
// Passo 2.2. Calcule o maior divisor
	resto= num1 % num2;
	while(resto != 0){
		num1= num2;
		num2= resto;
		resto= num1 % num2;
	}
// Passo 3. Imprima o resultado
   printf("MDC(%d,%d) = %d\n", a, b, num2);

   return 0;

// pós: mdc = MDC(A,B)   
} // fim da função main 