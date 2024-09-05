#include <stdio.h>

int main()
{
int numero, x;
printf("Digite um numero: ");
scanf("%d", &numero);

for(x = 1; x<=numero;x++)
{
	printf("%d\n", x);
}
	return 0;
}

