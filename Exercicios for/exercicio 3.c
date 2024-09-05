#include <stdio.h>

int main()
{
int tabuada, resultado;
int x;
printf("Digite um numero de 0 a 10: ");
scanf("%d", &tabuada);
printf("Tabuada do %.2d\n", tabuada);

for(x=0; x<11; x++)
{
	resultado = tabuada * x;
	printf("%d x %d = %d\n", x, tabuada,resultado );
}
return 0;
}
