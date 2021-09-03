// Programa: mostrames.c
// Programador: Thaisla
// Data: 30/11/2018
// Este Programa ilustra a passagem de uma string como refência.
// O programa lê um número entre um e 12 e usando uma função 
// void mostrames(int, string)
// computa o mês (Janeiro a Dezembro) referente ao valor lido,
// retorna o mês para a função principal que imprime o resultado.
// declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<string.h> // strcpy

// declaração de tipos
typedef char string[17];

// declaração das funções
void mostrames(int, string);

// início da função principal
int main(void) {
// declaração das variáveis locais
int    num;
string nomemes;

// pré: input == umInt1 umInt2

// Passo 1. Leia os dados
   scanf("%d", &num);
// Passo 2. Atribua o mês correspondente
   mostrames(num, nomemes);
// Passo 3. Imprima os resultados
   printf("%s\n", nomemes);

   return 0;

// pós: b a
} // fim da função principal

// Função: mostrames
// Programador: Thaisla
// Data: 30/11/2018
//Esta função computa o mês equivalente
void mostrames(int nummes, string nomemes) {

 	if(nummes == 1)
 		strcpy(nomemes, "Janeiro");
 	if(nummes == 2)
 		strcpy(nomemes, "Fevereiro");
 	if(nummes == 3)
 		strcpy(nomemes, "Março");
 	if(nummes == 4)
 		strcpy(nomemes, "Abril");
 	if(nummes == 5)
 		strcpy(nomemes, "Maio");
 	if(nummes == 6)
 		strcpy(nomemes, "Junho");
 	if(nummes == 7)
 		strcpy(nomemes, "Julho");
 	if(nummes == 8)
 		strcpy(nomemes, "Agosto");
 	if(nummes == 9)
 		strcpy(nomemes, "Setembro");
 	if(nummes == 10)
 		strcpy(nomemes, "Outubro");
 	if(nummes == 11)
 		strcpy(nomemes, "Novembro");
 	if(nummes == 12)
 		strcpy(nomemes, "Dezembro");
 	else if(nummes < 1 || nummes >12)
 		strcpy(nomemes, "Número Inválido");
   return;

// pós: string == (Janeiro || Fevereiro || ... || Dezembro)
} // fim da função Swap
