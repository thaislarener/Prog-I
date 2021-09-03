// Programa: areatrap.c
// Programador: Sabrina
// Data: 22/10/2018	
// Programa para calcular a área sob o trapézio de uma função
// f de x = a até x = b usando método dos trapézios, e com o valor das
// funções escolhidas nos extremos de cada subintervalos.
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<math.h>

// início da função principal
int main(void){
// declaração das variáveis locais
int		num;
double	a,b,
		deltaX,
		x,
		soma,
		areaTrap;

// Passo 1. Leia a entrada
   scanf("%lf", &a);
   scanf("%lf", &b);
   scanf("%d", &num);
// Passo 2. Calcule a área usando o método dos trapézios
   deltaX = (b - a)/(double)num;
   soma = cos(a)/2.0;
   for(x = a + deltaX; x < b; x = x + deltaX)
   		soma = soma + cos(x);
   soma = soma + cos(b)/2.0;
   areaTrap = soma * deltaX;
// Passo 3. Imprima o resultado
   printf("%.8lf\n", areaTrap);

return 0;

} // fim da função principal