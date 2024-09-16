#include <stdio.h>

int main()
{
	char nome[20];
	int i;
	puts("Qual o seu nome?");
    gets(nome);
	for(i=0;i<4;i++)
	{
		printf("%c", nome[i]);	
	}
	return 0;
}

