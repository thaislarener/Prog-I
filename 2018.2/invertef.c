#include<stdio.h>
#include<string.h>
// declaração das funções
void invertef(int, const int [], int []);
// início da função principal
int main(void){
// declaração das variáveis locais
int tam, i,
	lista[100],
	copia[100];

// Passo 1. Leia o arranjo
// Passo 1.1. Leia o tamanho
	scanf("%d", &tam);
// Passo 1.2. Leia os elementos do arranjo
	for(i = 0; i < tam; i++)
		scanf("%d", &lista[i]);
	memcpy(copia, lista, tam*sizeof(int));
// Passo 2. Inverta a lista
	invertef(tam, lista, copia);
// Passo 3. Imprima a lista invertida
	for(i = 0; i < tam; i++)
		printf("%d ", copia[i]);
	printf("\n");

	return 0;

}
// Função: invertef
void invertef(int size, const int a[], int b[]){
	int i;
		for(i = 0; i < size; i++){
			b[size-1-i] = a[i];
		}

	return;
}