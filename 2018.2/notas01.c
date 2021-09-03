// Programa notas01.c
// Programador: Thaisla
// Data: 09/11/2018
// A avaliação da disciplina de Algoritmos e Programação I
// é composta de três provas e dois trabalhos. Projete um 
// programa que leia um conjunto de alunos com as respectivas notas 
// das provas e dos trabalhos. O programa deve ordenar os alunos pelo
// primeiro nome usando o método de ordenação por inserção
// (insertionSort). O programa deve imprimir a lista dos alunos ordenada
// pelo primeiro nome. O programa é implementado com o uso da função:
//    void insertionSort(ESTUDANTE lista[], int ultimo);
// para a ordenação dos nomes dos estudantes,
// Declaração das Bibliotecas Utilizadas
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Declaração das constantes globais
#define NUM_EST 80
//	Declaração dos tipos globais
typedef struct{
   char   nome[12];
   char   sobrenome[12];
   double provas[3];
   double trabalho[2];
} ESTUDANTE;

// início da função principal
int main (void) {
// Declaração das variáveis locais
ESTUDANTE lista[NUM_EST], temp; // lista
int   walk, n,
      i, j, corrente;

// pré: n alunos[0]...alunos[n]

// Passo 1. Leia a entrada
// Passo 1.1. Leia o tamanho do conjunto de conjunto de teste
   scanf("%d", &n);
// Passo 1.2. Leia os dados dos estudantes
   for(i = 0; i < n; i++){
      scanf("%s", lista[i].nome);
      scanf("%s", lista[i].sobrenome);
      for(j = 0; j < 3; j++)
         scanf("%lf", &lista[i].provas[j]);
      for(j = 0; j < 2; j++)
         scanf("%lf", &lista[i].trabalho[j]);
   }
// Passo 2. Ordene os dados 
// Passo 2.1. Para corrente = 1 até último - 1 faça
//             o primeiro elemento da lista está ordenado
//             seq. ordenado lista[0..corrente-1]
//             seq. desordenado lista[corrente..ultimo-1]
   for (corrente = 1; corrente < n; corrente++) {
// Passo 2.1.1. Atribua a temp o valor a ser inserido na lista ordenada
      temp = lista[corrente];
// Passo 2.1.2. Insira lista[corrente] na sequencia ordenada 
//               lista[0..corrente-1]
      walk = corrente - 1;
      while (walk >= 0  && strcmp(temp.nome, lista[walk].nome) < 0) {
         lista[walk + 1] = lista[walk];
         walk--;
      } // fim while
      lista[walk + 1] = temp;
   } // fim for
// Passo 3. Imprima os Dados 	 
   for (i = 0; i < n; i++) 
      printf("%-12s %-12s %4.1f %4.1f %4.1f %4.1f %4.1f\n",
                lista[i].nome,
                lista[i].sobrenome,
	            lista[i].provas[0],
	            lista[i].provas[1],
	            lista[i].provas[2],
	            lista[i].trabalho[0],
                lista[i].trabalho[1]);

   return 0;

} // fim função main
