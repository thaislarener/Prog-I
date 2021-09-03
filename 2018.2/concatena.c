// Programa: concatena.c
// Programador: Thaisla
// Data: 23/08/2018
// Este programa lê duas palavras, computa e imprime uma outra que é
// concatenação das duas palavras lidas
// Declaração das biliotecas utilizadas
#include<stdio.h> // printf
#include<string.h>

// início da função principal
int main(void) { 
// Declaração das Variáveis Locais
char pala1[25], pala2[25];

// pré: palavra1, palavra2

// Passo 1. Leia as palavras
	scanf("%s %s", pala1, pala2);
// Passo 2. Compute a concatenação das palavras
	strcat (pala1, pala2);
// Passo 3. Imprima os resultado
   printf("%s\n", pala1);

   return 0;

// pós: strcat (palavra1, palavra2)
} // fim da função principal