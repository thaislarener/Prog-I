//bibliotecas utilizadas
#include<stdio.h>
//inicio da função principal
int main(void){
//declaração das variáveis
   int  A[50], n, i,
        minimo, maximo,
        iminimo, imaximo,
        variacao;
//Passo 1. Leia a entrada
   scanf("%d", &n);
   for(i = 0; i < n; i++)
      scanf("%d", &A[i]);
//Passo 2. Compute o maximo
   maximo = A[0];
   imaximo = 0;
   for(i = 1; i < n; i++){
      if(A[i] > maximo){
         maximo = A[i];
         imaximo = i;
      }
   }
//Passo 3. Compute o minimo
   minimo = A[0];
   iminimo = 0;
   for(i = 1; i < n; i++){
      if(A[i] < minimo){
         minimo = A[i];
         iminimo = i;
      }
   }
//Passo 4. Calcule a variação
   variacao = maximo - minimo;
//Passo 5. Imprima o resultado
   printf("%d %d %d %d %d\n", imaximo, maximo, iminimo, minimo, variacao);

   return 0;
}//fim da função principal