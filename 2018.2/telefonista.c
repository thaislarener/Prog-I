// Programa: telefonistaufms.c
// Programador: 
// Data: 10/11/2018
// Este programa lê um conjunto de nomes, encontra o telefone de 
// cada uma e imprime o telefone da 
// pessoa procurada. O programa armazena uma lista com n nomes
// de pessoas e seus respectivos telefones que estão no catálogo.
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include <ctype.h>
// declaração de tipos
typedef char string[30];

typedef struct {
   string telefone;
   string nome;
   string sobrenome;
} DADOS;

typedef CATALOGO[1000];

// início da função principal
int main(void) {
// declaração das variáveis locais	
CATALOGO pessoas;
string   nomep;
string   sobrenomep;
int      tamp, tamsp;
int      n;
int      verificador = 1;
int      cont = 0;
int      encontrou = 0;
int      posi;
bool     r = false;
bool     achou = true;

// pré: pessoas ultnome[1] prinome[1]...ultnome[k] prinome[k]

// Passo 1. Leia o número de dados do catálogo	
   scanf("%d", &n);

   // Leitura da lista
   while (cont < n){
   	scanf("%s %s %s", pessoas[cont].nome, pessoas[cont].sobrenome, pessoas[cont].telefone);
   	cont++;
   }

// Passo 2. Leia o catálogo    
  while (scanf("%s", sobrenomep) != EOF)
  {
  	scanf("%s %s", nomep, sobrenomep);
    tamp = strlen(nomep);
    tamsp = strlen(sobrenomep);

    for(int i = 0; i < n && r == false; i++){
      for (int j = 0; j < tamp && achou == true; j++){
        if (pessoas[i].nome[j] != nomep[j]){
          achou = false;
          verificador = 0;
        }
      }

      if (achou == true){
        for (int l = 0; l < tamsp && achou == true; l++){
          if (pessoas[i].sobrenome[l] != sobrenomep[l]){
            achou = false;
            verificador = 0;
          }
        }
      }
      if (verificador == 1 && achou == achou){
        r = true;
        posi = i;
      }
     r = false;
     verificador = 1;
     achou = true;
    } 

    if (verificador == 1){
      printf("%s %s %s\n", sobrenomep, nomep, pessoas[posi].telefone);
    }

    else if (verificador != 1){
      printf("%s %s não consta\n", sobrenomep, nomep);
    }
  } 

// Passo 2.1. Leia o nome		
      
// Passo 2.2. Leia o telefone
      
// Passo 3. Leia o número de buscas   
   
// Passo 4. Encontre os telefones   
  
// Passo 4.1. Leia o nome
      
// Passo 4.2. Procure o nome na lista		
     
// Passo 4.2.1. Se o nome foi encontrado armazene a posição
         
// Passo 4.3. Imprima o telefone ou a mensagem
  //cont = 0;
  //while (cont < n)
  //{
  	//printf("%s %s %s\n", pessoas[cont].nome, pessoas[cont].sobrenome, pessoas[cont].telefone);
    //cont++;
 // }
return 0;

// pós: prinome ultnome pessoas[i].telefone && 
//      prinome == pessoas[i].nome && ultnome ==
//      pessoas[i].sobrenome
} // fim da função main
