// Programa: campominado.c
// Programador: Thaisla
// Data: 31/10/2018
// Este programa lê um mini campo-minado composto de uma matriz, 4x4, 
// onde o número (0) indica espaços livres e o número (1) indica que 
// há uma bomba no local. O programa lê um número inteiro m de (pontos)
// tentativas, dados por linhas e colunas no campo-minado. O programa
// verifica se o ponto é uma bomba ou não. Caso seja, imprimir 1, senão 0.
#include<stdio.h>
// declaração das constantes
#define MAX 4

// início da função principal
int main(void) {
// declaração das variáveis locais
 int M[MAX][MAX],
 	 n, x, y, 
 	 i, j, k;

//Passo 1. Preencha o campo
 	for(i = 0; i < 4; i++){
 	 	for(j = 0; j < 4; j++){
 	 		scanf("%d", &M[i][j]);
 	 	}
 	}

 //Passo 2. Leia as coordenadas
 	scanf("%d", &n);
 	k = 0;
 	while(k < n){
 		scanf("%d %d", &x, &y);
 		if(M[x-1][y-1] == 0)
 			printf("0\n");
 		else
 			printf("1\n");
 		k++;
 	}

   return 0;
} // fim da função principal
