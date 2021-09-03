#include<stdio.h>
int main(void){
int soma;
  
   soma = 0;
   for (int i = 1; i <= 3; i++) {
      for (int j = 1; j <= 3; j++) {
         for (int k = i; k <= j; k++) {
            soma = soma + i + j + k;
         }
      }
   }
   printf("%d ", soma);
   return 0;
}