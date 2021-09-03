// Programa: codifica21.c
// Programador: Thaisla
// Data: 01/10/2018
// Este programa codifica uma mensagem usando uma frase de codificação.
// Para cada caractere do alfabeto da frase de codificação é associado um 
// valor numérico que será adicionado de forma cíclica a cada um dos
// caracteres da mensagem. A=1, B=2, ect... Transformamos esse resultado
// em um número entre 65 a 90, a variação dos códigos ASCII para
// caracteres do alfabeto maiúsculos, e então convertemos o número
// resultante novamente em um caractere.
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<ctype.h>  // toupper
#include<string.h> // strlen
// definição de constantes e instruções
#define TAM 80   // tamanho máximo da string
// Declaração dos tipos
typedef char string[TAM];

// início da função principal
int main(void) {
// Declaração das variáveis locais
string  mensagem,     // mensagem a ser codificada
        mensagemc,    // mensagem codificada
        palavra;      // palavra chave
int     tam,      // tamanho da palavra codificadora
        tamp,
        novocod,
        i;            // índice

// pré: mensagem palavra

// Passo 1. Leia a entrada
// Passo 1.1. Leia a mensagem a ser codificada
   scanf("%79[^\n]s", mensagem);
// Passo 1.2. Entre com a frase codificadora.
   scanf("%s", palavra);
// Passo 1.3. Compute o tamanho da mensagem de da palavra
   tam = strlen(mensagem);
   tamp = strlen(palavra);
// Passo 2. Codifique cada um dos caracteres da mensagem
// Passo 2.1. Codifique o caractere
   for(i = 0; i < tam; i++){
      novocod = toupper(mensagem[i]) + toupper(palavra[i%tamp])-64;
      if (novocod>=91)
          novocod = 65 + novocod % 91;
      mensagemc[i]=novocod;
   } // fim for
// Passo 3. Imprima a mensagem codificada
   printf("%-79s\n", mensagemc);

   return 0;

// pós: c[1]...c[n] && para i em {1,...,n}: c[i] == mensagem[i] + 
//      palavra[i%tamanho]
} // fim da função principal
