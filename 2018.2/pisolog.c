//Programa: pisolog.c
//Este programa lê um número inteiro n e calcula
//o piso do log_2 n ultilizando uma função
//declaração das bibliotecas ultilizadas
#include<stdio.h>

//declaração das funções
int piso_log2(int);

//inicio da função principal
int main(void){
//declaração das variaveis
	int num, pisolog;

//Passo 1. Leia um inteiro
	scanf("%d", &num);

//Passo 2. Compute o piso de log_2(num)
	pisolog = piso_log2(num);

//Passo 3. Imprima o resultado
	printf("%d\n", pisolog);

	return 0;
}//fim da função principal

int piso_log2(int n){
//declaração das variaveis
	int pot2, p;

//Passo p.1. Calcule o piso de log2 de 1
	pot2 = 1; //2^0
	p = 0; //piso de log_2(pot2)

//Passo p.2. Calcule o piso de log2 de n>1
	while(pot2 <= n){
		pot2 *= 2; // 2^i
		p++; //piso de log_2(pot2)
	}

	return p-1;
}//fim da função