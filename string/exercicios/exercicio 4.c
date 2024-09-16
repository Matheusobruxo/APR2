#include <stdio.h>
#include <string.h>

int main()
{
	char frase[50];
	char letra[2];
	
	puts("Digite uma Frase: ");
	gets(frase);
	int len = strlen(frase);
	int i, repeticoes = 0;
	
	puts("Digite uma letra: ");
	gets(letra);
	
	for(i=0;i<len;i++)
	{
		if(frase[i]==letra[0])
		{
			repeticoes++;
		}
	}
	printf("%d", repeticoes);

	
	return 0;
}

