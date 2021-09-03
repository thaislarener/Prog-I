// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>
// início da função principal
int main(void){
// Declaração das variáveis
char  frase[21],
	 palavra[21];
int  cont, i;

// Passo 1. Leia a entrada
	scanf("%s", frase);
	scanf("%s", palavra);
// Passo 2. Conte o número de vezes que palavra ocorre na frase
	cont = 0;
	i = 0;
// Passo 2.1. Conte o número de ocorrencias
	while(frase[i+2] != '\0'){
		if(frase[i] == palavra[0] && frase[i+1] == palavra[1] && frase[i+2] == palavra[2])
			cont++;
		i++;
	}
// Passo 3. Imprima o resultado
	printf("%d\n", cont);

	return 0;

} // fim da função principal