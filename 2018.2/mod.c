//declaração das bibliotecas
#include<stdio.h>
//inicio da função principal
int main(void){
//declaração das variáveis
	int num1, divi;
//Passo 1. Leia dois numeros
	scanf("%d", &num1);
//Passo 2. Encontre os divisores do intervalo
	divi= num1 % 4;
	printf("%d \n", divi);
	return 0;
}//fim da função principal