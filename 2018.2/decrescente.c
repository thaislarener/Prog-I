// declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>
// inicio da função principal
int main(void){
// declaração das variáveis
int   L[100],
	  tam, i;
bool  decres;

//Passo 1. Leia a entrada
	scanf("%d", &tam);
	for(i = 0; i < tam; i++)
		scanf("%d", &L[i]);
//Passo 2. Verifique se está em ordem decrescente
	decres = false;
	for(i = 0; i < tam-1; i++){
		if(L[i] > L[i+1])
			decres = true;
		if (L[i] == L[i+1])
			decres = false;
	}
//Passo 3. Imprima a mensagem
	if (!decres)
		printf("falso\n");
	else
		printf("verdadeiro\n");

return 0;
} // fim da função principal