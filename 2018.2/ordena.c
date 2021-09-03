#include<stdio.h>
int main(void){
	int L[50],
		aux, indice,
		n, i;

//Passo 1. Leia o tamanho da lista
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &L[i]);

//Passo 2. Ordene a vetor
	for(i = 0; i < n-1; i++){
		indice = i;
		for (int j = i+1; j < n; j++){
			if(L[i] > L[j]){
				aux = L[i];
				L[i] = L[j];
				L[j] = aux;
			}
		indice = j;	
		}
		aux =
	}

	for(i = 0; i < n; i++){
		printf("%d ", L[i]);
	}
	printf("\n");
	return 0;
}