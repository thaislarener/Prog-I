// Programa: fibonaci01.c
// Programador: Thaisla
// Data: 05/10/2018
// Este programa lê um inteiro positivo num > 1 e calcula e imprime os
// o num termos da sequência de Fibonacci.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf, endl
#include<limits.h>

// início da função principal
int main(void) {
// declaração das variáveis locais
long int numero, 
         fib1,
         fib2,
         novoFib;
int      numtermos;

// pré: 1 =< num < 2147483647

// Passo 1. Leia um inteiro positivo
   scanf("%ld", &numero);

// Passo 2. Calcule e conte a sequência de Fibonaci de 1,1,.., num
// Passo 2.1. Inicialize a sequência de Fibonaci
   numtermos = 0;
   fib1 = 0;
   fib2 = 1;
// Passo 2.2. Enquanto o próximo número de Fibonacci for menor ou igual a num
   while(fib1 < numero){
   	novoFib = fib1 + fib2;
// Passo 2.2.1. Conte o número de termos da sequência
    numtermos++;
// Passo 2.2.2. Calcule o próximo número na sequência
    fib1 = fib2;
    fib2 = novoFib;
   }
// Passo 3. Imprima o número de termos
   printf("Num. de Termos: %d\n", numtermos);


   return 0;

// pós: para i em {1,...,num}:fib[i] | fib[1] == 1 && fib[2] == 1 && 
//      fib[i] == fib[i-2] + fib[i-1] num {i ! fib[i] < numero} 
} // fim da função principal