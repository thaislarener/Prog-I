// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdlib.h> // srand, rand
#include<math.h>   // pow
#include<time.h> // time
//#include<unistd.h> // sleep

// início da função principal
int main(void) { 
// declaração das variáveis locais
int sai, semente, j,
    espessura, neutrons,
    energia, muro, direcao,
    anterior, reator, dissipa;

// Passo 1, Leia espessura, neutrons, semente e inicialize as variáveis
// Passo 1.1. Leia a espessura e o número de nêutrons
   scanf("%d", &espessura);
// Passo 1.2. Leia a espessura e o número de nêutrons
   scanf("%d", &neutrons);
// Passo 1.3 Leia a semente
   scanf("%d", &semente);
// Passo 1.4. Inicialize as variáveis
   reator = 0;
   dissipa = 0;
   sai = 0;
// Passo 2. Simule neutrons vezes
   for(j = 0; j < neutrons; j++){                                             
// Passo 2.1. Gere a semente
      semente = semente + pow(2,j%15) - 11*j;
      srand(semente);
// Passo 2.2. Incialize as variáveis
      anterior = 3;
      energia = 10;
      muro = espessura - 1;
// Passo 2.3. Calcule o trajeto do nêutron e verifique se ele sai do muro
      while(muro > 0 && energia > 0 && muro <= espessura){
// Passo 2.3.1. Gere a direção a ser pelo nêutron 
            direcao = rand() % 4;
// Passo 2.3.2. Se direção for != da anterior o nêutron perde energia
            if(direcao != anterior)
                energia--;
// Passo 2.3.3. Se direção for 0 volta em direção ao reator
            if(direcao == 0)
                muro++;
// Passo 2.3.4. Se direção for 3 caminha no muro em direção a saída
            if(direcao == 3)
                muro--;
// Passo 2.3.5. Atualize a direção anterior
            anterior = direcao;
      } // fim while
// Passo 2.4. Verifique se o nêutron saiu do muro com energia
      if(energia > 0 && muro <= 0)
       sai++;
// Passo 2.5. Verifique a energia do nêutron dissipou
      else if(energia <= 0 )
        dissipa++;
// Passo 2.6. Verifique se nêutron voltou para o reator
      else
        reator++;
   } // fim for
// Passo 3. Imprima os resultados
   printf("%d %d %d %d\n", neutrons, reator, dissipa, sai);

   return 0;

} // fim da função