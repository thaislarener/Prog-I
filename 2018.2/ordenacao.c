#include<stdio.h>
int main(){
	int x, y, z, aux;
	scanf("%d %d %d", &x, &y, &z);

	if(y<x){
	 	aux=y;
		y=x;
		x=aux;
	}
    if(z<y){
    	 aux=z;
    	 z=y;
    	 y=aux;
    }
    if(y<x){
	 	aux=y;
		y=x;
		x=aux;
	}
	printf("%d %d %d", x, y, z);

	return 0;
}
