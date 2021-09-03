// Programa: intercala00.c
// Programador: Thaisla
// Data: 10/10/2018
// Este programa lê dois vetores a e b de inteiros, do mesmo
// tamanho, computa a intercalação de a e b e imprime o
// resultado 
// Intercalação de vetores de mesmo tamanho.
// a == [1, 3, 5, 7, 9]
// b == [4, 2, 8, 6, 10]
// a intercalado com b
// c = [a[0],b[0],a[1],b[1],a[2],b[2],a[3],b[3],a[4],b[4]]
// nesse caso específico, os dois vetores tem o mesmo tamanho
// c = [1,4,3,2,5,8,7,6,9,10]
// declaração das bibliotecas utilizadas
#include<stdio.h>
// início da função principal
int main(void) {
//declaração de variaveis
	int A[50], B[50], AB[100],
		i, n;
	//Passo 1. Leia as duas sequencias
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			scanf("%d", &A[i]);
		}
		for(i = 0; i < n; i++){
			scanf("%d", &B[i]);
		}
//Passo 2. Intercale as sequencias
		for(int i = 0; i < n; ++i){
			AB[2 * i] = A[i];
			AB[2 * i + 1] = B[i];
		}
//Passo 3. Imprima o resultado
		for(i = 0; i < n + n; ++i){
			printf("%d ", AB[i]);
		}
		printf("\n");
   return 0;

} // fim da função principal
