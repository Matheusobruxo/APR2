#include <stdio.h>
#include <string.h>

int main()
{
	char nome[20];
	char sobreNome[20];
	
	puts("Digite seu nome: ");
	gets(nome);
	puts("Digite seu sobreNome: ");
	gets(sobreNome);
	
	strcat(nome,sobreNome);
	puts(nome);
	
	int lenNome = strlen(nome);
	printf("Tamanho da string: %d\n",lenNome);
	printf("Primeira letra: %c\n",nome[0]);
	printf("Ultima letra da string: %c\n",nome[lenNome-1]);
	return 0;
}

