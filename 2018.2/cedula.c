//bibliotecas ultilizadas
#include <stdio.h>

//declaração das funções
void troco(int, int, int*, int*, int*, int*, int*, int*);

//inicio da função principal 
int main(void){
//declaração das variaveis
   int compra, pagamento,
      cinqu, vinte, dez,
      cinco, dois, um;

//Passo 1. Leia a entrada
   scanf("%d %d", &compra, &pagamento);

//Passo 2. Calcule o troco
   troco(compra, pagamento, &cinqu, &vinte, &dez, &cinco, &dois, &um);

//Passo 3. Imprima o resultado
   printf("%d nota(s) de R$ 50,00\n", cinqu);
   printf("%d nota(s) de R$ 20,00\n", vinte);
   printf("%d nota(s) de R$ 10,00\n", dez);
   printf("%d nota(s) de R$ 5,00\n", cinco);
   printf("%d nota(s) de R$ 2,00\n", dois);
   printf("%d moeda(s) de R$ 1,00\n", um);

   return 0;
}//fim da função principal

void troco(int compra, int pag, int* n50, int* n20, int* n10, int* n5, int* n2, int* m1){
//declaração das variaveis
   int trocorem;

//Passo t.1. Calcule o troco
   trocorem = pag - compra;

//Passo t.2. Calcule as cédulas
   *n50 = trocorem / 50;
   trocorem %= 50;
   *n20 = trocorem / 20;
   trocorem %= 20;
   *n10 = trocorem / 10;
   trocorem %= 10;
   *n5 = trocorem / 5;
   trocorem %= 5;
   *n2 = trocorem/2;
   trocorem %= 2;
   *m1 = trocorem/1;

   return;
}
