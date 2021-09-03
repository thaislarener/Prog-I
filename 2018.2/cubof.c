//bibliotecas ultilizadas
#include<stdio.h>

//funções ultilizadas
//função leia
double leia(void){
	double num;

//Passo 1. Leia o num
	scanf("%lf", &num);

	return num;
}
//função calcula cubo 
double cubofun(double num){
	double cubo;

	cubo = num * num * num;
	return cubo;
}
//função imprime 
void   imprime(double num, double cubo){
	printf("%lf %lf\n", num, cubo);

	return;
}

//inicio da função principal
int main(void){
	double num, cubo;

//Passo 1. Leia o numero
	num = leia();
//Passo 2. Compute o cubo do numero
	cubo = cubofun(num);
//Passo 3. Imprime o resultado
	imprime(num, cubo);

return 0;
}