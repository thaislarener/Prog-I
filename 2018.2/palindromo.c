//biliotecas ultilizadas
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

int main(void){//inicio da função
//declaração das variaveis
	char palavra[80],
		 pala[80];
	int  tam, i, j;
	bool pali;

//Passo 1. Leia as palavras
	scanf("%79[^\n]s", palavra);
//Passo 2. Verifique o tamanho da palavra
	tam = strlen(palavra);
	for(i = 0, j = tam-1; i < tam; ++i, j--){
		pala[i] = palavra[j];
	}
	pali = true;
	for(i = 0; i < tam; ++i){
		if(toupper(pala[i]) != toupper(palavra[i])){
			pali = false;
			i = tam;
		}
	}
	if(pali)
		printf("palindromo\n");
	else
		printf("nao palindromo\n");
	return 0;

}