//bibliotecas ultilizadas
#include<stdio.h>

//funções ultilizadas

//função leia
void leia(double *num1, double *num2){

	scanf("%lf %lf", num1, num2);
	return;
}

//função soma
double somaf(double num1, double num2){
	double soma;

	soma = num1 + num2;
	return soma;
}

//função imprime
void   imprime(double num, double cubo, double a){

	printf("%lf + %lf = %lf\n", num, cubo, a);
	return;
}


//inicio da função principal
int main(void){
//declaração das variaveis
	double num1, num2,
		   soma;

//Passo 1. Leia os numeros
    leia(&num1, &num2);
//Passo 2. Faça a soma
	soma = somaf(num1, num2);
//Passo 3. Imprime o resultado
	imprime(num1, num2, soma);

return 0;
}