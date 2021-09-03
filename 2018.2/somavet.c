//declaração das bibliotecas
#include<stdio.h>
#include<string.h>
int main (void){//inicio da função
//declaração das variáveis
	char S1[50], S2[50];
	int V1[50], V2[50], R[50]={0},
		tam1, tam2, tamS=0,
		i, j;
//Passo 1. Leia as sequencias
	scanf("%s %s", S1, S2);
//Passo 2. Passe a sequencia para o vetor
//Passo 2.1. Verifique o tamanho das strings
	tam1 = strlen(S1);
	tam2 = strlen(S2);
//Passo 2.2. Guarde o maior tamanho
	if(tam1 > tam2)
		tamS = tam1-1;
	else 
		tamS = tam2-1;
//Passo 2.3. Passe os valores para o vetor
	for(i = tamS, j = tam1-1; i >= 0; i--, j--){
		if(j < 0)
			V1[i] = 0;
		else
			V1[i] = S1[j] - '0';
	}
	for(i = tamS, j = tam2-1; i >= 0; i--, j--){
		if(j < 0)
			V2[i] = 0;
		else
			V2[i] = S2[j] - '0';
	}
//Passo 3. Faça a soma dos vetores
	for(i = tamS; i >= 0; i--){
		R[i] += V1[i] + V2[i];
		if(R[i] / 10 >= 1 && i != 0){
			R[i-1]= R[i] / 10;
			R[i] = R[i] % 10;
		}
	}
//Passo 4. Imprima o resultado
	for(i = 0; i <= tamS; ++i){
		printf("%d", R[i]);
	}
	printf("\n");

	return 0;
}//fim da função