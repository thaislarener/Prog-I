// Programa: cos.c
// Programador: Thaisla
// Data: 07/10/2018
// Este algoritmo lê um número e 
// calcula o cosseno.
#include<stdio.h>
#include<math.h>
//inicio da função principal
int main(void){
//declaração das variáveis
   double n, cos, fatorial;
   int i, j, k;
//Passo 1. Leia a entrada
   scanf("%lf", &n);
//Passo 2. Série de Taylor
   cos = 1;
   for (i = 2, k = 0; i <= 10; i += 2, k++){
//Passo 2.1. Calcule o fatorial
      fatorial = i;
      for (j = i-1; j > 0 ; j--){
         fatorial *= j;
      }
//Passo 2.2. Calcule o cosseno
      if(k % 2 == 0)
      cos -= pow(n, i) / fatorial;
      else 
      cos += pow(n, i) / fatorial;
   }
//Passo 3. Imprima o resultado
   printf("cos(%+.4lf) = %+.4lf\n", n, cos);

   return 0;
}//fim da função principal