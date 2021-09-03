//bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>
//inicio da função principal
int main(void){
//declaração das variáveis
   float  A[50], B[50], C[50];
   int    n, i;
   bool   paralelo;
//Passo 1. Leia a entrada
   scanf("%d", &n);
   for(i = 0; i < n; i++)
      scanf("%f", &A[i]);
   for(i = 0; i < n; i++)
      scanf("%f", &B[i]);      
//Passo 2. Verifique se são paralelos
   for(i = 0; i < n; i++)
      C[i] = B[i] / A[i];
//Passo 3. Imprima o resultado
   paralelo = true;
   for(i = 1; i < n && paralelo; i++){
      if(C[i] != C[i-1])
         paralelo = false;
      else
         paralelo = true;
   }

   if(paralelo)
      printf("sim\n");
   else 
      printf("não\n");

   return 0;
}//fim da função principal