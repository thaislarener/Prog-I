// Programa: publicidade.c
// Programador: Sabrina
// Data: 03/10/2018
// Este algoritmo l^e o n ́umero de arm ́arios vendidos por m^es,
// o lucro por arm ́ario e os custos de publicidade e operacional da empresa.
// Calcula quanto deve ser investido em publicidade at ́e que o lucro da
// empresa comece a diminuir.

#include<stdio.h>

// Início da função principal
int main(void){
// Declaração das variáveis
int      numArmarios,
         numNArmarios;
double   lucroArmario,
         custoPublicidade,
         custoNPublicidade,
         custoOperacional,
         lucro, 
         lucroN;

// pré: numArmarios lucroArmario custoPublicidade custoOperacional

// Passo 1. Leia a entrada
// Passo 1.1. Leia o número de armários vendidos
   scanf("%d", &numArmarios);
// Passo 1.2. Leia o lucro por armário
   scanf("%lf", &lucroArmario);
// Passo 1.3. Leia o custo da publicidade
   scanf("%lf", &custoPublicidade);
// Passo 1.4. Leia o custo operacional
   scanf("%lf", &custoOperacional);

// Passo 2. Calcule o lucro
   lucro = (numArmarios * lucroArmario) - custoPublicidade - custoOperacional;
// Passo 3. Calcule o lucro com aumento da publicidade
   custoNPublicidade = 2.0 * custoPublicidade;
   numNArmarios = numArmarios + ((20 * numArmarios)/100);
   lucroN = (numNArmarios * lucroArmario) - custoNPublicidade - custoOperacional;
// Passo 4. Compute o investimento máximo em publicidade
   while (lucroN > lucro){
// Passo 4.1. Atualize as vendas e o custo da publicidade
      lucro = lucroN;
      numArmarios = numNArmarios;
      custoPublicidade = custoNPublicidade;
// Passo 4.2. Calcule o novo lucro com aumento da publicidade
      custoNPublicidade = 2.0 * custoPublicidade;
      numNArmarios = numArmarios + ((20 * numArmarios)/100);
      lucroN = (numNArmarios * lucroArmario) - custoNPublicidade - custoOperacional;
   } // fim while

// Passo 5. Imprima os resultados
   printf("%d %.2lf %.2lf\n", numArmarios, custoPublicidade, lucro);

// pós: numArmarios, custoPublicidade, lucro

return 0;

} // fim da funão principal