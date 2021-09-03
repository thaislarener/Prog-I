// Programa: somasequencia01.c
// Programador: Thaisla
// Data: 17/09/2018
// Este algoritmo calcula a soma da sequência dos num termos da
// sequência S = 1 + 3/2 + 5/3 + 7/4 + ... + 99/50
#include<stdio.h> // printf

// início da função principal
int main(void){
// declaração das variáveis locais
float soma, termo;
float   numerador, denominador;
int   num, i;

// pré: UmInt

// Passo 1. Leia o número de termos e inicialize a soma
// Passo 1.1. Leia o número de termos  
   scanf("%d", &num);
// Passo 1.2. Inicialize a soma
   soma = 0.0;
// Passo 2. Compute o primeiro numerador e denominador
   if(num>0){
   numerador = 1.0;
   denominador = 1.0;
   soma= numerador / denominador;

// Passo 2 Calcule os primeiros num termos da soma
   for (i = 1; i < num; i++){
     	numerador += 2.0;
     	denominador++;
     	soma= soma + (numerador / denominador);
     }
    }        
// Passo 3. Imprima o valor da soma
   printf("%f\n", soma);

   return 0;

// pós: soma == Soma i em {1,...,50}: termo[i] && 
//      termo[i] == 2*i – 1/i
} // fim da função principal
