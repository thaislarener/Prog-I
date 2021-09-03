// Programa: caracteres.c
// Programador: Thaisla
// Data: 22/08/2018
// Este programa lê uma palavra e computa e imprime o primeiro e o
// último caractere da palavra lida.
// Declaração das biliotecas utilizadas
#include<stdio.h> // printf
#include<string.h>
// declaração de tipos
typedef char string[20];

// início da função principal
int main(void) { 
// Declaração das Variáveis Locais
string palavra;
char   primeiro, ultimo;
int    tam;

// pré: palavra == c[0]c[1]...c[tam-1]

// Passo 1. Leia uma palavra
	scanf("%s", palavra);
// Passo 2. Calcule o primeiro e o último caractere da palavra
// Passo 2.1. Calcule o primeiro caractere da palavra
	primeiro = palavra[0];
	tam= strlen(palavra);
// Passo 2.2. Calcule o último caractere da palavra
	ultimo = palavra[tam-1];
// Passo 3. Imprima os resultados
	printf("%d\n", tam);
   printf("%c %c\n", primeiro, ultimo);

   return 0;

// pós: c[0] c[tam-1]
} // fim da função principal