// Programa: eqsegundo.c
// Programador: Thaisla
// Data: 05/09/2018
// Este programa lê três coeficientes de uma equação do 
// segundo grau e calcula as raizes da esquação.
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
#include<math.h>
// início da função principal
int main(void) {
// declaração das variáveis locais
double a, b, c;
double delta=0;
double x1, x2;
// pré: a, b, c

// Passo 1. Leia os coeficiêntes
	scanf("%lf %lf %lf", &a, &b, &c);
// Passo 2. Calcule as raizes
	delta= b*b-4*a*c;
	if(delta>=0){
		x1= (-b - sqrt(delta))/(2*a);
		x2= (-b + sqrt(delta))/(2*a);
	}
// Passo 3. Imprima os resultados
	if(delta>=0)
		printf("%.2lf %.2lf\n", x1, x2);
	else
		printf("A equação não possui raízes reais\n");

   return 0;

// pós: numpositivos == Num i em {1,..4}: numero[i] > 0.0 &&
//      soma == Soma i em {1...4}: numero[i] && numero[i] > 0
} // fim da função principal
