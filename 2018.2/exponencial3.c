// Programa: exponencial.c
// Programador: 
// Data: 08/10/2018
// Este algoritmo lê um número e 
// calcula a exponencial.
#include<stdio.h>
#include<math.h>
//inicio da função principal
int main(void){
//declaração das variáveis
   double x, e, eps, neps,
          termoat, termoan=0,
          fatorial;
   int i, j;
//Passo 1. Leia a entrada
   scanf("%lf", &x);
   scanf("%lf", &eps);
//Passo 2. Calcule o exponencial
   e = 1;
   termoat = 1;
   neps = fabs(termoat - termoan);
   i = 1;
   while(fabs(neps) > eps){
//Passo 2.1. Calcule o fatorial
   fatorial = i;
      for (j = i-1; j > 0 ; j--){
         fatorial *= j;
      }
      termoat = e;
      e += pow(x, i) / fatorial;
      termoan = e;
      neps = termoat - termoan;
      i++;
   }
//Passo 3. Imprima o resultado
   printf("%.7f\n", termoat);

   return 0;
}//fim da função princi