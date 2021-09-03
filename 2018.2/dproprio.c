//declaração das bibliotecas
#include<stdio.h>
#include<math.h>
//inicio da função principal
int main(void){
//declaração das variáveis
	int num1, num2,
		divi, sdivi,
		i, j;
//Passo 1. Leia dois numeros
	scanf("%d %d", &num1, &num2);
//Passo 2. Encontre os divisores do intervalo
	for(i = num1; i <= num2; i++){
		sdivi = 1;
		for(j = 2; j < i-1; j++){
			divi = i % j;
			if(divi == 0)
				sdivi += j;
		}
		if(sdivi == i)
			printf("%d perfeito\n", i);
		else if(sdivi < i)
			printf("%d deficiente\n", i);
		else if(sdivi > i)
			printf("%d abundante\n", i);
	}
	return 0;
}//fim da função principal