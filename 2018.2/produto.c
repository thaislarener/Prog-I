// Programa: produto.c
// Programador:
// Data: 26/06/2012
// O Diálogo: Programa para ler duas matrizes e calcular o seu produto..
#include<stdio.h>
#include<stdbool.h>
// declaração das constantes
#define MAX 50

// início da função principal
int main(void) {
// declaração das variáveis locais
int 	A[MAX][MAX], B[MAX][MAX],
		soma, prod[MAX][MAX],
		m, n, r, s, 
		linha, coluna,
		i, j, k;
bool 	produto;

// Passo 1. Leia a entrada
// Passo 1.2. Leia o tamanho da matriz A
	scanf("%d %d", &m, &n);
// Passo 1.2. Leia a matriz A
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
	}
// Passo 1.3. Leia o tamanho da matriz B
	scanf("%d %d", &r, &s);
// Passo 1.4. Leia a matriz B
	for(i = 0; i < r; i++){
		for(j = 0; j < s; j++){
			scanf("%d", &B[i][j]);
		}
	}
// Passo 2. Faça o produto das matrizes
	produto = n == r;
	if(produto){
		linha = m;
		coluna = s;
		for(i = 0; i < m; i++){
			for(j = 0; j < s; j++){
				soma = 0;
				for(k = 0; k < n; k++)
					soma = soma + A[i][k] * B[k][j];
				prod[i][j] = soma;
			}
		}
	}
	if(produto){
		for(i = 0; i < linha; i++){
			for(j = 0; j < coluna; j++){
				printf("%d ", prod[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("produto não definido\n");


   return 0;

} // fim da função principal
