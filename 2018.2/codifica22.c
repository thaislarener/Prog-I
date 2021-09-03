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
   scanf("%s", mensagem);
// Passo 1.2. Entre com a frase codificadora.
   scanf("%s", palavra);
// Passo 1.3. Compute o tamanho da mensagem de da palavra
   tam = strlen(mensagem);
   tamp = strlen(palavra);
// Passo 2. Codifique cada um dos caracteres da mensagem
// Passo 2.1. Codifique o caractere
   for(i = 0; i < tam; i++){
      novocod = toupper(mensagem[i]) - toupper(palavra[i%tamp]) + 64;
      if(novocod >= 91)
        novocod = 65 + novocod % 91;
      else if(novocod < 65)
        novocod += 26;
      mensagemc[i] = novocod;
   } // fim for
   mensagem[tam] = '\0';
// Passo 3. Imprima a mensagem codificada
   printf("%s\n", mensagemc);

   return 0;
} // fim da função principal