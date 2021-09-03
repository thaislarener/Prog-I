//bibliotecas ultilizadas
#include<stdio.h>

int main(void){//inicio da função
//declaração das variaveis
	int tamA, tamB,
		A[25], B[25],
		C[25], i, j, k;

//Passo 1. Leia a entrada
//Passo 1.1. Deposito Campo Grande
		scanf("%d", &tamA);
		for(i = 0; i < tamA; i++)
			scanf("%d", &A[i]);
//Passo 1.2. Deposito Ponta Porã
		scanf("%d", &tamB);
		for(i = 0; i < tamB; i++)
			scanf("%d", &B[i]);
//Passo 2. Faça a interseção
		if(tamA == 0 || tamB == 0)
			printf("vazia\n");
		else{
			k = 0;
			for(i = 0; i < tamA; i++){
				j = 0;
				while(A[i] != B[j] && j < tamB)
					j++;
				if(j < tamB){
					C[k] = A[i];
					k++;
				}
			}
//Passo 3. Imprima o resultado
			for(i = 0; i < k; i++)
				printf("%d ", C[i]);
			printf("\n");
		}

	return 0;
}//fim da função