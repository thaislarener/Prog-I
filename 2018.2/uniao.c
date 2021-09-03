// Declaração das bibliotecas utilizadas
#include<stdio.h>

// início da função principal
int main(void){

// declaração das variaveis
int		CG[25], PP[25], 	
		U[50]={0}, N[50]={0},
		tam1, tam2,
		i, j, k=0;

// Passo 1. Leia as entradas
// Depósito Campo Grande
	scanf("%d", &tam1);
	for(i = 0; i < tam1; i++){
		scanf("%d", &CG[i]);
	}
// Depósito Ponta Porã
	scanf("%d", &tam2);
	for(i = 0; i < tam2; i++){
		scanf("%d", &PP[i]);
	}
// Passo 2. Faça a união
	if(tam1 == 0 || tam2 == 0)
		printf("vazia\n");
	else{
		for(i = 0; i < tam1; i++)
			U[i] = CG[i];
		for(i = 0; i < tam2; i++)
			U[i+tam1] = PP[i];

	    for(i = 0; i < tam1+tam2; i++){
	        for(j = 0; j < k; j++){
	            if(U[i] == N[j])
	                break;
	        }
	        if(j == k){
	           N[k] = U[i];
	            k++;
	        }
	    }
	// Passo 3. Imprima o resultado
		for(i = 0; i < k; i++)
			printf("%d ", N[i]);
		printf("\n");
    }
	
	return 0;

} // fim da função principal