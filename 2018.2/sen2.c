// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<math.h>
// início da função principal
int main(void){
// declaração das variáveis locais
double			x,
				epsilon,
				sen, termo, numerador;
long long int	denominador;
int				i;

// Passo 1. Leia as entradas
	scanf("%lf", &x);
	scanf("%lf", &epsilon);
	sen = 0.0;
	i = 1;
// Passo 2. Compute a soma dos termos 
// Passo 2.1. Compute o primeiro elemento
	numerador = x;
	denominador = i;
	termo = numerador/denominador;
// Passo 2.2. Faça a soma enquanto termo for maior que epsilon
	while(fabs(termo) >= epsilon){
		sen = sen + termo;
		numerador = -numerador * (x * x);
		denominador = denominador * (2 * i) * (2 * i + 1);
		termo = numerador/denominador;
		i++;
	} // fim while

// Passo 3. Imprima o valor do seno
	printf("sen(%+9.6f) = %+9.6f\n", x, sen);

	return 0;

} // fim da função principal