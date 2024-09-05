#include <stdio.h>
int main()
{
int soma;
int x, notas;

for (x=1;x<11;x++)
{
	printf("Digite a nota n: %d\n", x);	
	scanf("%d", &notas);
	soma = soma + notas;	
}	

printf("Media da sala %d:", soma/10);
return 0;
}
