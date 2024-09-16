#include <stdio.h>
#include <string.h>

int main()
{
	char nome[20];
	puts("Digite um nome:");
	gets(nome);
	int i,j, len = strlen(nome);
	
	for(i=0; i <len; i++)
	{
		for(j=0; j <=i; j++)
		{
			printf("%c",nome[j]);	
		}
		printf(" \n");
		
	}
	return 0;
}

