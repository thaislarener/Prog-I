// Programa: triangulo.c
// Programador: Thaisla
// Data: 05/09/2018
// Diálogo: Este programa lê três números reais e verifica se eles
// podem ser os comprimentos dos lados de um triângulo e se forem, 
// verificar se é um triângulo equilátero, isósceles ou escaleno. Se não
// formarem um triângulo, escrevem uma mensagem.  
// Bibliotecas Utilizadas
#include<stdio.h> // scanf, printf
#include<stdbool.h>
#include<string.h>
// declaração de tipos
typedef char string[20]; 

// início da função principal
int main(void) {
// declaração das variáveis locais
double x;
double y;
double z;
int triangulo=0;
string msg;

// pré: x y z

// Passo 1. Leia o lado do quadrado
   scanf("%lf %lf %lf", &x, &y, &z);
// Passo 2. Verifique se formam um triângulo.
   if((x + y > z) && (x + z > y) && (y + z > x))
   	triangulo= 1;
// Passo 2.1. Classifique o tipo de triângulo
  if (triangulo==1)
   {
      if((x==y)||(x==z)||(y==z))
         strcpy(msg,"isóceles");
      
      if((x!=y)&&(y!=z))
         strcpy(msg,"escaleno");
   
   	if((x == y) && (y == z))
   		strcpy(msg,"equilátero");
   }
// Passo 2.2. Imprima a mensagem que não é um triângulo
   else
   	strcpy(msg,"não é triangulo");
// Passo 3. Imprima os lados e o tipo
   printf("lados: %.2f, %.2f, %.2f - %s\n", x, y, z, msg);

   return 0;

// pós: triangulo == (x + y > z) && (x + z > y) && (y + z > x) &&
//      ("Não é Triângulo" &&  triangulo == false) || "equilátero" ||
//      "isósceles" || "escaleno"
} // fim da função principal
