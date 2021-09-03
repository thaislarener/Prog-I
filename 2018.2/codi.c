#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (void){
typedef char string[255];

int novocod,
		tam, tamp,
		i;
	string mensagem,
		   mensagemcodif,
		   palavra; 

scanf("%255[^\n]s ", mensagem);
scanf(" %s", palavra);

tam = strlen(mensagem);
tamp = strlen(palavra);

for (i=0; i<tam; i++){
	novocod = toupper(mensagem[i]) + toupper(palavra[i%tamp])-64;
	if (novocod>=91)
		novocod = 65 + novocod % 91;
	mensagemcodif[i]=novocod;
}
printf("%-79s", mensagemcodif);
return 0;
}