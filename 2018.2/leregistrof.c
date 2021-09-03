#include<stdio.h>
//declaração dos tipos
typedef char string[20];
typedef struct{
	string nome;
	double notasp[2];
	double notast[3];
} ALUNO;

//declaração das funções 
ALUNO ledados(void);

//inicio da função principal
int main(void){
//declaração as variaveis
	ALUNO alunom;

//Passo 1. Leia os dados do aluno
	alunom = ledados();

//Passo 2. Imprima os dados do aluno
	printf("%s\n", alunom.nome);
	printf("Notas das Provas: %.2f %.2f %.2f\n", alunom.notasp[0], alunom.notasp[1], alunom.notasp[2]);
	printf("Notas dos trabalho: %.2f %.2f\n", alunom.notast[0], alunom.notast[1]);
	
	return 0;
}//fim da função principal

ALUNO ledados(void){
//declaração das variaveis locais
	ALUNO alunof;

	scanf("%[^\n]s", alunof.nome);
	scanf("%lf", &alunof.notasp[0]);
	scanf("%lf", &alunof.notasp[1]);
	scanf("%lf", &alunof.notasp[2]);
	scanf("%lf", &alunof.notast[0]);
	scanf("%lf", &alunof.notast[1]);


	return alunof;
	
}//fim da função ledados
