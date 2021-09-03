// Programa: contapos.c
// Programador: Thaisla
// Data: 05/09/2018
// Este programa lê quatro números inteiros, conta quantos números
// inteiros positivos foram lidos e imprime o resultado.
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf

// início da função principal
int main(void) {
// declaração das variáveis locais
int numero1, numero2, numero3, numero4; // numeros reais
int soma=0; // soma dos positivos
int numpositivos=0;
 
// pré: numero1 numero2 numero3 numero4

// Passo 1. Leia os 4 números
	scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);
// Passo 2. Calcule o número e a soma de positivos
	if(numero1>0){
		soma= numero1;
		numpositivos++;
	}
	if(numero2>0){
		soma+= numero2;
		numpositivos++;
	}
	if(numero3>0){
		soma+= numero3;
		numpositivos++;
	}
	if(numero4>0){
		soma+= numero4;
		numpositivos++;
	}
// Passo 3. Imprima os resultados
	printf("Número de positivos lidos: %d\n", numpositivos);
	printf("Soma dos positivos: %d\n", soma);

   return 0;

// pós: numpositivos == Num i em {1,..4}: numero[i] > 0.0 &&
//      soma == Soma i em {1...4}: numero[i] && numero[i] > 0
} // fim da função principal
