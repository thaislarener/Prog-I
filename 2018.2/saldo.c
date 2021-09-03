// Programa: saldo.c
// Programador: Thaisla
// Data: 10/09/2018
// Diálogo: Este programa calcula a saldo da conta corrente de
// um cliente num determinado banco. O programa lê 
// o crédito disponível da conta corrente e a operação a ser 
// realizada, (D) para depósito ou (C) para saque, o valor da
// operação e calcular o saldo após a operação. O programa deve
// imprimir o saldo disponível após a operação.
// declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf
#include<ctype.h> // toupper

// início da função principal
int main(void) {
// declaração das variáveis locais
double saldo_Anterior;
double valor_Operacao;
double saldo_Atual= 0.0;
char   operacao;
    
// pré: saldo_Anterior operacao valor_Operacao

// Passo 1. Leia o saldo anterior e a duração da chamada
scanf("%lf", &saldo_Anterior);
scanf(" %c", &operacao);
scanf("%lf", &valor_Operacao);
// Passo 2. Calcule o saldo atual
if(toupper(operacao) == 'D')
	saldo_Atual= saldo_Anterior + valor_Operacao;
else 
	if(toupper(operacao) == 'S')
	saldo_Atual= saldo_Anterior - valor_Operacao;
else
	saldo_Atual= saldo_Anterior;
// Passo 3. Imprima os resultado
   printf("Saldo atual: R$%+10.2f\n", saldo_Atual);
  
   return 0;
	
// pós: saldo_Atual == (saldo_Anterior+valor_Operacao && operacao == D)
//      || (saldo_Anterior-valor_Operacao && operacao == S)
} // fim da função principal
