//bibliotecas ultilizadas
#include<stdio.h>
int main(void){//inicio da função
//declaração das variaveis
	int quad[50][50],
		linha, coluna, k,
		tlinha, tcoluna,
		i, j, n;
//Passo 1. Leia o tamanho do quadrado
		scanf("%d", &n);

//Passo 2. Preencha o quadrado
//Passo 2.1. Inicialize o quadrado
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				quad[i][j] = 0;
			}
		}

//Passo 2.2. Primeiro elemento
		linha = 0;
		coluna = n/2;
		quad[0][n/2] = 1;
		k = 2;

//Passo 2.3. Coloque os demais elementos
		while(k <= n*n){
//movimente uma linha para cima e uma coluna para a direita
		 	tlinha = linha -1;
		 	tcoluna = coluna + 1;
//verifique se saiu do quadrado pela linha
		 	if(tlinha < 0)
		 		tlinha = n-1;
//verifique se saiu pelo lado direito do quadrado
			if(tcoluna > n-1)
				tcoluna = 0;
//verifique se a posição esta ocupada
			if(quad[tlinha][tcoluna] == 0){
				linha = tlinha;
				coluna = tcoluna;;
			}
//ocupada coloque na posição abaixo de k
			else{
				linha++;
//verifique se saiu do quadrado
			if(linha > n-1)
				linha = 0;
			}
			quad[linha][coluna]= k;
			k++;
		}

//Passo 3. Imprima o resultado
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%2d ", quad[i][j]);
			}
			printf("\n");
		}

		return 0;
}//fim da função