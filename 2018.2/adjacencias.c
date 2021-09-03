// Programa: adjacencias.c
// Programador: Thaisla
// Data: 31/10/2018
// Este programa lê o número de vértices de um dado digrafo, e as
// arestas (dadas por pares ordenados, o par 0 0 indica que final das
// arestas) e computa a matriz de adjacências do grafo (n x n).
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// Declaração das constantes
#define MAX 100   // limita do número de linhas na matriz
// Declaração de tipos
typedef int matriz[MAX][MAX];

// início da função principal
int main(void) {
// declaração das variáveis locais
int 	ADJ[MAX][MAX] = {0},
		m,
		v1, v2,
		i, j; 

// Passo 1. Leia a entrada
	scanf("%d", &m);
	scanf("%d %d", &v1, &v2);
	while(v1 != 0 && v2 != 0){
		ADJ[v1-1][v2-1] = 1;
		scanf("%d %d", &v1, &v2);
	}

// Passo 2. Imprima a matriz 
	for(i = 0; i < m; i++){
		for(j = 0; j < ;m j++)
			printf("%d ", ADJ[i][j]);
		printf("\n");
	}
	
// pré: UmInt, G | para i,j em {1,...,vertices} && (i,j) é uma aresta de G


   return 0;

// pós: para todo i em {1,...,n}: para todo j em {1,...,r}: (a[i][j] == 1
//      && (i, j) é uma aresta de G) || (c[i][j] == 0)
} // fim da função principal
