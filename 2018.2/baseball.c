// Escreva um programa para simular 1000 vezes uma batida para um
// jogador de baseball utilizando as estatíticas do jogador e conte
// o número de outs, walks, singles e assim por diante, e calcule sua
// média de rebatidas ((número de batidas)/(1000 - número de walks)).
// Declaração das biliotecas utilizadas
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>

// início da função principal
int main(void) { 
// declaração das variáveis locais
int   out, walk, 
      semente, i;
float x, media;

// Passo 1. Gere a semente
   scanf("%d", &semente);
   srand(semente);
// Passo 2. Inicialize as variáveis
   out = 0;
   walk = 0;
// Passo 2. Gere 1000 números entre 0.0 e 1.0
   for(i = 1; i <= 1000; i++){
      x = (float)rand()/(float)RAND_MAX;
// Passo 2.1. Classifique a rebatida
      if(x * 100.0f > 63.4){
         if( x * 100.0f <= 63.4 + 10.3)
            walk++;
      }
      else
         out++;
   }
// Passo 3. Calcule a média de rebatidas
   media = (1000 - out - walk) / (float)(1000 - walk);

// Passo 4. Imprima a média
   printf("%.4f\n", media);

   return 0;

} // fim da função principal