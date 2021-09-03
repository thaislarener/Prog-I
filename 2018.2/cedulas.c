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
	scanf("%d %d", &pagamento, &compra);

if(pagamento == compra){
	printf("0 cédula(s) de 50\n");
   printf("0 cédula(s) de 20\n");
   printf("0 cédula(s) de 10\n");
   printf("0 cédula(s) de 5\n");
   printf("0 cédula(s) de 2\n");
   printf("0 moeda(s) de 1\n");
}

else{
//Passo 2. Calcule o troco
	troco(compra, pagamento, &cinqu, &vinte, &dez, &cinco, &dois, &um);

//Passo 3. Imprima o resultado
	if(cinqu != 0)
		printf("%d cédula(s) de 50\n", cinqu);
	if(vinte != 0)
 		printf("%d cédula(s) de 20\n", vinte);
    if(dez != 0)
		printf("%d cédula(s) de 10\n", dez);
	if(cinco != 0)
		printf("%d cédula(s) de 5\n", cinco);
	if(dois != 0)
		printf("%d cédula(s) de 2\n", dois);
	if(um != 0)
		printf("%d moeda(s) de 1\n", um);
}

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
