// Programa: charordem01.c
// Programador: Thaisla
// Data: 10/09/2018
// O Diálogo: Este programa lê quatro caracteres letra1, letra2, letra3 e 
// letra4 e verifica se pertencem ao alfabeto. Se pertencerem ao 
// alfabeto, o programa verifica se estão em ordem crescente. 
// O programa imprime mensagens adequadas do resultado.
// Declaração das bibliotecas utilizadas
#include<stdio.h>   // printf, scanf
#include<ctype.h>
#include<string.h>
// declaração dos tipos utilizados
typedef char string[50];

// início da função principal
int main(void) { 
// Declaração das variáveis locais
char    letra1, letra2, letra3, letra4;  // caracteres a serem lidos
string  msg;

// pré: letra1 letra2 letra3 letra4

// Passo 1. Leia quatro caracteres
   scanf("%c %c %c %c", &letra1, &letra2, &letra3, &letra4);

// Passo 2. Verifique se os caracteres são do alfabeto
   if(isalpha(letra1) && isalpha(letra2) && isalpha(letra3) && isalpha(letra4)){

// Passo 2.1. Verifique se os caracteres estão em ordem crescente
   		if(letra1<letra2 && letra2<letra3 && letra3<letra4)
        	strcpy(msg,"Os caracteres estão em ordem crescente.");
     	else
     		strcpy(msg,"Os caracteres não estão em ordem crescente.");
    }
    else
    	strcpy(msg, "Pelo menos um dos caracteres não é do alfabeto");
// Passo 3. Imprima os resultados
   printf("%s\n", msg);

   return 0;
	
// pós: (letra1<letra2 && letra2<letra3 && letra3 < letra4 &&
//      Os caracteres estão em ordem crescente) || (Os caracteres 
//      não estão em ordem crescente) 
} // fim da função principal
