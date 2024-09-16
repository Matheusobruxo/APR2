#include <stdio.h>
#include <string.h>


int main()
{
	char palavra[20];
	int i=0;
	puts("Digite uma palavra: ");
    gets(palavra);
	while(palavra[i] != '\0')
	{
		i++;
	}
	
	printf("O tamanho da palavra e: %d", i);
   	return 0;
}

