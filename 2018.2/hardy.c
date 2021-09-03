// Programa: hardy.c
// Programador: Thaisla
// Data: 07/11/2018
// Este programa que gera o conjunto de pares de cubos i*i*i + j*j*j menores
// 10000 e encontra o menor valor que pode ser escrito como a soma de dois
// cubos. O programa usa uma matriz triangular inferior para armazenar os 
// cubos.
// declaração das bibliotecas utilizadas
#include<stdio.h>
//declaração das constantes
#define MAXLIN 22
#define MAXCOL 22
// início da função principal
int main(void) {
// declaração das variáveis
	int	num1, num2, num3, num4, num,
	    mat[MAXLIN+1][MAXCOL+1] = {0},
		placa, i, j, k, l;
//Passo 1. Gere a matriz
		for(i = 0; i < MAXLIN + 1; i++){
			for(j = 0; j <= i; j++){
				mat[i][j] = i*i*i + j*j*j;
			}
		}
//Passo 2. Busque dois cubos iguais na matriz
		for(i = 0; i <= MAXLIN; i++){
			for(j = 0; j <= i; j++){
				num = mat[i][j];
				for(k = 0; k < MAXLIN; k++){
					for(l = 0; l < k; l++){
						if(num == mat[k][l] && k!= i){
							num1 = i; num2 = j;
							num3 = k; num4 = l;
							l = MAXLIN + 2;
							k = MAXLIN + 1;
							j = MAXLIN + 2;
							i = MAXLIN + 1;
						}
					}
				}
			}
		}
//Passo 2.1. Compute o valor da placa
		placa = num1*num1*num1 + num2*num2*num2;
//Passo 3. Imprima os resultados
		printf("%d %d %d %d %d\n", placa, num1, num2, num3, num4);
   return 0;

} // fim da função principal
