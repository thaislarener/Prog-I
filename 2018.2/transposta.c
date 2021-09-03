//bibliotecas ultilizadas
#include<stdio.h>

int main(void){//inicio da função principal
//declaração das variaveis
	int m, n,
		i, j,
		A[20][20],
		AT[20][20]={0};

//Passo 1. Leia a dimensão da matriz
	scanf("%d %d", &m, &n);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &A[i][j]);
		}
	}
//Passo 2. Faça a transposta da matriz
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			AT[i][j] = A[j][i];
		}
	}
//Passo 3. Imprima o resultado
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", AT[i][j]);
		}
		printf("\n");
	}

	return 0;
}//fim da função principal