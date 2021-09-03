// Programa: telefonistaufms.c
// Programados: Thaisla
// Data: 08/07/2010
// Este programa lê um conjunto de nomes, encontra o telefone de 
// cada uma e imprime o telefone da 
// pessoa procurada. O programa armazena uma lista com n nomes
// de pessoas e seus respectivos telefones que estão no catálogo.
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
// declaração de tipos
typedef char string[15];
typedef struct {
   char   telefone[12];
   string nome;
   string sobrenome;
} DADOS;
typedef CATALOGO[1000];

// início da função principal
int main(void) {
// declaração das variáveis locais	
CATALOGO pessoas;
string   prinome;
string   ultnome;
int      n;
int      pos;
bool     encontrou;

// pré: pessoas ultnome[1] prinome[1]...ultnome[k] prinome[k]

// Passo 1. Leia o número de dados do catálogo	
   scanf("%d", &n);
// Passo 2. Leia o catálogo    
   for(int i = 0; i < n; i++){
// Passo 2.1. Leia o nome		
   	scanf("%s %s", pessoas[i].nome, pessoas[i].sobrenome);
// Passo 2.2. Leia o telefone
   	scanf("%s", pessoas[i].telefone);
   }
// Passo 3. Leia o número de buscas   
   
// Passo 4. Encontre os telefones   
  
// Passo 4.1. Leia o nome
      
// Passo 4.2. Procure o nome na lista		
     
// Passo 4.2.1. Se o nome foi encontrado armazene a posição
         
// Passo 4.3. Imprima o telefone ou a mensagem
     
	return 0;

// pós: prinome ultnome pessoas[i].telefone && 
//      prinome == pessoas[i].nome && ultnome ==
//      pessoas[i].sobrenome
} // fim da função main
