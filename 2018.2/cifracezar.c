#include <stdio.h>
void cezar();
int main(void){
	int n, k;
	char pal[50];

	scanf("%d", &n);
	while (n > 0)
	{
		scanf(" %s", pal);
		scanf("%d", &k);
		cezar(pal, k);
		printf("%s\n", pal);
		n--;
	}
	return 0;
}

void cezar(char pal[], int k){
	for (int i = 0; pal[i] != '\0'; i++)
	{
		pal[i] = pal[i] - k;
		if (pal[i] < 65)
			pal[i] += 26;
	}
}
