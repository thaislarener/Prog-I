#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
//declaração das variaveis	
	char texto[255],
		 textoc[255],
		 palavra[15];
	int  tam, tamp, 
		 codificador,
		 i, j;
// Passo 1. Leia o texto e a palavra
    scanf("%255[^\n]s", texto);
    scanf("%s", palavra);
	scanf("%d", &codificador);
// Passo 2. Guarde o tamanho
    tam = strlen(texto);
    tamp = strlen(palavra);
    j=0;
// Passo 3.
    for(i = 0; i < tam; i++){
		texto[i] = (texto[i] - 'A' + palavra[j] % tamp - 'A' + 1) % 26;
		j++;
	}
// Passo 4. Deixe o texto em letras maiusculas
	for (i = 0; i < tam; i++){
		texto[i] = toupper(texto[i]);
	}
// Passo 5.
	for (i = 0; i < tam; i++){
		textoc = (texto[i] - 'A' + codificador) % 26;
	}
// Passo 6. Imprima o texto codificado
	printf("%s\n", textoc);

	return 0;
}