// Programa: primeiroultimo.c
// Programador: Thaisla
// Data: 13/09/2018
// Este programa lê um número inteiro, indicando a 
// quantidade de números a serem lidos. O programa lê cada
// um dos números e a cada número lido computa se o primeiro e o
// último número são iguais.
// declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>
// declaração de tipos
typedef char string[10];

// início da função principal
int main(void) {
// declaração das variáveis locais
int     numero,
        primeiro=0, // armazena o primeiro dígito
        ultimo=0;   // armazena o último dígito
string msg;

// Passo 1, Leia o número e incialize as variáveis
// Passo 1.1. Leia um número
	scanf("%d", &numero);
// Passo 2. Compute o último e o primeiro dígito
// Passo 2.1. Computa o último digito
	ultimo= numero % 10;
// Passo 2.2. Decomponha o número 
   while(numero >= 10) {
// Passo 2.2.1. Retire um dígito
   	numero= numero / 10;
   } // fim while
// Passo 2.3. Compute o primeiro dígito
   primeiro= numero % 10;
// Passo 2.4. Verifique se é igual a digito anterior
   if(primeiro == ultimo)
   	strcpy(msg, "sim");
   else
   	strcpy(msg, "não");
// Passo 3. Imprime o resultado
   printf("%s\n", msg);
   return 0;

} // fim da função principal.
