//bibliotecas ultilizadas
#include<stdio.h>
int main(void){//inicio da função
//declaração das variaveis
	int cubo[30][30],
		somalinha[30],
		somacoluna[30],
		somadiagonalp,
		somadiagonals,
		resultado=1,
		i, j, n;
//Passo 1. Leia a matriz
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &cubo[i][j]);
			}
		}
//in cubo é magico
//Passo 2.1. Some as linhas
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				somalinha[i] += cubo[i][j];
			}
		}

//Passo 2.2. Some as colunas
		for(j = 0; j < n; j++){
			for(i = 0; i < n; i++){
				somacoluna[j] += cubo[i][j];
			}
		}

//Passo 2.3. Some a diagonal principal
		for(i = 0; i < n; i++){
			somadiagonalp += cubo[i][i];
		}

//Passo 2.4. Some a diagonal secundaria
		for(j = n-1; j >= 0; j--){
			somadiagonals += cubo[n-j-1][j];
		}
//Passo 3. Verifique se são iguais
		if(somadiagonals == somadiagonalp){
			for(i = 0; i < n; i++){
				if(somadiagonalp != somalinha[i] || somadiagonalp != somacoluna[i]){
					resultado = 0;
					i = n;
				}
			}			
		}
		else
			resultado = 0;
//Passo 3. Imprima o resultado
		printf("%d\n", resultado);
		return 0;
}//fim da função