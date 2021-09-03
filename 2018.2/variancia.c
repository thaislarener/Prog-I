// Programa: variancia.c
// Programador: Thaisla
// Data: 18/09/2018
// O Diálogo: Este programa lê um conjunto de números, conta-os calcula e
// imprime a média, variância e desvio padrão desse conjunto de números.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf, EOF
#include<math.h>     // sqrt

// início da função principal
int main(void) {
// declaração das variáveis locais
unsigned int totalNum = 0; // total de números lidoso
double       numero,       // número sendo lido
             soma = 0.0,   // Soma dos números lidos
             soma2 = 0.0,  // soma dos quadrados dos números
             media,        // média dos números
             variancia,    // variância dos números
             desvioPadrao; //
int          leitura;

// pré: UmFloat[1]\n UmFloat[2]\n ... \n UmFloat[n]\n && n > 0

// Passo 1. Leia o primeiro número
   scanf("%lf", &numero);
   leitura = numero;
// Passo 2. Leia o restante dos números e calcule sua soma.
// Passo 2.1. enquanto houverem mais números faça
   while (leitura >= 0.0) {
// Passo 2.2. conte o número lido
    totalNum++;
// Passo 2.3. Some o número lido
    soma += numero;
// Passo 2.4. Some o quadrado do número lido
    soma2 += (numero * numero);
// Passo 2.5. leia o próximo número
    scanf("%lf", &numero);
    leitura = numero;
	} // fim while
// Passo 3. Calcule a Média
  media= soma / totalNum;
// Passo 4. Calcule a Variância
  variancia= (soma2 / totalNum) - ((soma * soma) / (totalNum * totalNum));
// Passo 5. Calcule o desvio padrão
  desvioPadrao= sqrt(variancia);
// Passo 6. Imprima os resultados
   printf("\nMédia = %.2f\n" , media);
   printf("Variância = %.2f\n", variancia);
   printf("Desvio Padrão = %.2f\n", desvioPadrao);

   return 0;

// pós: soma == para i em {1,...,n}: UmFloat[i] &&
//      soma2 == para i em {1,...,n}: UmFloat[i]*UmFloat[i] &&
//      totalNum == n && media == soma/(float)totalNum &&
//      variancia == soma2/(float)totalNum - media*media &&
//      desvioPadrao == sqrt(variancia)
} // fim da função principal

