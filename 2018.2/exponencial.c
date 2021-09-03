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
   double x, e, eps,
          eps1, eps2, eps3, fatorial=1;
   int i, j=1;
//Passo 1. Leia a entrada
   scanf("%lf", &x);
   scanf("%lf", &eps);


   eps1=1;
   while(fabs((eps2-eps1)/eps2)>=eps||eps1==1)
   {
      for(i=1; i<=j; i++)
         fatorial=fatorial*i;
      eps2=pow(x, j)/fatorial;
      eps3=eps2+eps1;
      eps1=eps2;
      eps2=eps3;
      j++;
   }
      printf("%.7f\n", eps3);

      return 0;
   }