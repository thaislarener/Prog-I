//declaração das bibliotecas ultilizadas
#include<stdio.h>
#include<string.h>

//declaração das funções
int inverte(int);

//inicio da função principal
int main(void){
//declaraçã da variaveis
	int num, numinv;
	char msg[20];

//Passo 1. Leia um inteiro
	scanf("%d", &num);

//Passo 2. Inverta o numero
	numinv = inverte(num);

//Passo 3. Verifique se é palindromo
	if(num == numinv)
		strcpy(msg, "palindromo");
	else
		strcpy(msg, "não palindromo");
//Passo 4. Imprima o resultado
	printf("%s\n", msg);

	return 0;
}//fim da função principal

int inverte(int n){
//declaração das variaveis
	int ninv;

//Passo i.1. Inicialize o inverso de n
	ninv = 0;

//Passo i.2. Inverta n e armazene em ninv
	while(n > 0){
		ninv = ninv*10 + n%10;
		n = n/10;
	}

	return ninv;

}//fim da função inverte