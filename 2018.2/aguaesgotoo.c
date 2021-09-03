// Programa: aguaesgoto.c
// Programador: Thaisla
// Data: 17/09/2018
// Este programa lê o consumo de água de um conjunto de residências
// e calcula a fatura da conta de água e esgoto para as 
// residências baseada no consumo de água. O programa lê o código de
// da residência (consumidor), o consumo de água da residência, computa 
// a fatura e então imprime uma fatura com o código do consumidor e os 
// valores cobrados com mensagens apropriadas. 
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
#include<math.h>

// início da função principal
int main(void) {
// declaração das variáveis locais
int     cod_consumidor;
int     consumo, cons;   
double  fat_agua;
double  fat_esgoto;
double  fat_total;
double  aux=0;
    
// pré: cod_consumidor consumo

// Passo 1. Leia o código do consumidor e consumo de água
   scanf("%d", &cod_consumidor);
   scanf("%d", &consumo);
  
// Passo 2. Calcule valor da fatura
// Passo 2.1. Calcule o valor da água
   cons = consumo;
   fat_esgoto= 0.0;
   if(consumo <= 20)
      fat_agua = consumo * 2.07;
   if(consumo > 50){
            aux = consumo - 50;
            fat_agua=(10*4.45)+(5 * 5.79)+(5 * 5.91)+(5 * 6.54)+(5 * 8.01)+(20 * 9.63)+(aux * 10.78);
            consumo=0;
   }
   if(consumo > 20){
         fat_agua = 10 * 4.45 + 5 * 5.79 + 5 * 5.91; 
         consumo -= 20;
         if(consumo > 0 && consumo <= 5)
            fat_agua += consumo* 6.54;
         if(consumo > 5 && consumo <= 10){
            aux = consumo - 5;
            fat_agua += (5 * 6.54) + (aux * 8.01);
         } 
         if(consumo > 10 && consumo <= 30){
            aux = consumo - 10;
            fat_agua += (5 * 6.54) + (5 * 8.01) + aux * 9.63;
         }
   } 
// Passo 2.2. Calcule o valor do esgoto
   fat_esgoto = (fat_agua * 70) / 100;
// Passo 2.3. Calcule o valor total
   fat_total = fat_agua + fat_esgoto;
// Passo 3. Imprima os resultado
   printf("===========================================\n");
   printf("Água e Esgotos Pureza e Limpeza Total Ltda.\n");
   printf("Consumidor: %d\n", cod_consumidor);
   printf("Consumo de Água: %d\n", cons);

   printf("Valor da Água  : R$%8.2f\n", fat_agua);
   printf("Valor do Esgoto: R$%8.2f\n", fat_esgoto);
   printf("Valor Total    : R$%8.2f\n", fat_total);
   printf("===========================================\n");

   return 0;
  
// pós: fat_total = fat_agua + fat_esgoto
} // fim da função principal
