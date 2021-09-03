// Programa: sen.c
// Programador: Thaisla
// Data: 07/10/2018
// Este algoritmo lê um número e 
// calcula o seno.
#include<stdio.h>
#include<math.h>
//inicio da função principal
int main(void){
//declaração das variáveis
   long long int fatorial;
   double n, sen, eps, dife,
          termoan, termoat;
   int    i, j, k;
//Passo 1. Leia a entrada
   scanf("%lf", &n);
   scanf("%lf", &eps);   
//Passo 2. Série de Taylor
   sen = n;
   i = 3;
   k = 0;
   dife= sen;
   while(fabs(dife) > eps){
//Passo 2.1. Calcule o fatorial
      fatorial = i;
      for (j = i-1; j > 0 ; j--){
         fatorial *= j;
      }
//Passo 2.2. Calcule o cosseno
      termoat = sen;
      if(k % 2 == 0)
      sen -= pow(n, i) / fatorial;
      else 
      sen += pow(n, i) / fatorial;
      termoa = senn;
      dife = termoat - termoan;
      i += 2; k++;
   }
//Passo 3. Imprima o resultado
   printf("sen(%+.4lf) = %+8.6lf\n", n, sen);

   return 0;
}//fim da função principal