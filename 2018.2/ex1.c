#include <stdio.h>

int main (){
	
	float raio, peri, area, pi;
	scanf("%f", &raio);
	pi= 3.14159;
	peri= 2*pi*raio;
	area= (raio*raio)*pi;
	printf("Raio = %5.2f\n", raio);
	printf("Perímetro = %f\n", peri);
	printf("Área = %f\n", area);
	
	return 0;
}