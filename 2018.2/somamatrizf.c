// Programa: somamatrizes.c
// Programador: Thaisla
// Data: 05/12/2018
// O Diálogo: Programa para ler duas matrizes e calcular o sua soma e
// imprimir o resultado.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// Declaração da função
void soma(int, int, int [100][100], int [100][100], int [100][100]);

// início da função principal
int main(void) {
// declaração das variáveis locais
int A[100][100], 
	B[100][100],
	C[100][100],
	m, n, i, j;

//Passo 1. Leia a dimesão das matrizes
	scanf("%d %d", &m, &n);

//Passo 2. Preencha a matriz
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &A[i][j]);
		
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &B[i][j]);
		
//Passo 3. Some as matrizes
	soma(m, n, A, B, C);

//Passo 4. Impima o resultado
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
   return 0;

// pós: para todo i em {1,...,linhas}: para todo j em {1,...,colunas}: somaMat[i][j]
//      && somaMat[i][j] == mat1[i][j] + mat2[i][j]
} // fim da função principal

void soma (int m, int n, int a[][100], int b[][100], int c[][100]){
	int i, j;

//Passo 1. Faça a soma das matrizes
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];

	return;
}//fim da função soma
