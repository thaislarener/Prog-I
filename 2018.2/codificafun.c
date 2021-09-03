// Programa: codifica01f.c
// Programador: Thaisla
// Data: 30/11/2018
// O Diálogo: Este programa codifica uma mensagem através da conversão de
// cada caracter da mensagem para o seu código numérico, adicionando um
// inteiro positivo menor ou igual a 95 a este código, tranformamos esse 
// resultado em um número entre 32 e 126, a variação dos códigos ASCII para 
// caracteres que podem ser impressos, e então convertemos o número resultante 
// novamente a um caracter.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// definição de constantes e instruções
#define LIMSTRING 80   // tamanho máximo da string  
#define EOS '\0'               // sinaliza o final da string
// Declaração dos tipos
typedef char string[LIMSTRING];
// declaração das funções
void codifica(string, int, string);

// início da função principal
int main(void) {
// Declaração das variáveis locais
string       mensagem,     // mensagem a ser codificada
             mensagemC;    // mensagem codificada												
int          codificador;  // inteiro a ser adicionado para codificar a
                           // mensagem

// pré: UmUInt\n UmChar[1]...UmChar[n]\n UmUInt\n && 
//      UmUInt == codificador && UmChar[1]...UmChar[n] == mensagem

// Passo 1. Entre com o deslocamento a ser dado para os caracteres.
   scanf("%d\n", &codificador);
// Passo 2. Leia a mensagem a ser codificada.
   fgets(mensagem, sizeof(mensagem), stdin);
// Passo 3. Codifique a Mensagem
   codifica(mensagem, codificador, mensagemC);
// Passo 4. Imprima a mensagem codificada
   printf("%-79s\n", mensagemC);

   return 0;

// pós: c[1]...c[n] && para i em {1,...,n}: c[i]==UmChar[i] + UmUInt
} // fim da função principal

// Função: codifica.c
// Programador:
// Data: 03/11/2011
// Esta função recebe uma string e um valor inteiro e faz a codificação da
// mensagem e retorna uma mensagem codificada
void codifica(string mensagem, int codificador, string mensagemC) {
// declaração das variáveis locais
int novoCodigo,   // novo código para o caracter
    i;            // índice da string

// pré: UmChar[1]...UmChar[n]\n UmUInt\n && UmChar[1]...UmChar[n] == Mensagem
//      && UmUInt == codificador

// Passo c.1. Inicie com a primeira posição da string 
   i = 0;
// Passo c.2. Enquanto não atingir o final da string ou o limite no número
//            de caracteres da string faça
   while(mensagem[i] != '\0'){
// Passo c.2.1. Codifique o caracter
    novoCodigo = mensagem[i] + codificador;
// Passo c.2.2. Verifique se o número obtido não é um caracter válido
    if(novoCodigo > 126)
// Passo c.2.2.1. Obtenha o número de um caracter válido
      novoCodigo = (novoCodigo % 126) + 33;
// Passo c.2.2. Atribua o novo caracter a mensagem
    mensagemC[i] = novoCodigo;
// Passo c.2.3. Incremente o número do caracter
    i++;
   }
// Passo c.3. Finalize a string codificada.
   mensagemC[i+1] = '\0';

   return;
// pós: c[1]...c[n] && para i em {1,...,n}: c[i]==UmChar[i] + UmUInt
} // fim da função codifica
