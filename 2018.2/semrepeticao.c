// Programa: semrepeticao.c
// Programador: sandy
// Data: 03/10/2018
// Este programa lê uma lista de  n itens, retira os elementos
// repetidos da lista e imprime o resultado.
// Declaração das Bibliotecas utilizadas
// Bibliotecas Utilizadas
#include<stdio.h>
// início da função principal
int main(void) {
//declaração das variaveis
	int S[50], R[50],
		n, i, j, k=1,
		cont=0;
//Passo 1. Leia as variaveis
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &S[i]);
		
	}
//Passo 2. Retira os numeros repetidos
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(S[i]==S[j])
				cont++;
			if(cont>1)
				R[j]=S[i];

		}
	}
//Passo 3. Imprima o resultado
	for(i = 0; i < k; i++){
		printf("%d ", R[i]);
	}
	printf("\n");

   return 0;

} // fim da função principal