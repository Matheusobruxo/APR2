#include <stdio.h>
#include <string.h>


int main()
{
	char palavra[10];
	int i, comp, contador =0;

	printf("Digite uma palavra: ");
	scanf("%s",palavra);
	printf("%d\n",strlen(palavra));
	printf("Palavra: %s\n", palavra);
	comp = strlen(palavra);
	for(i=0; i< comp;i++)
	{
		if(palavra[i] == palavra[comp-i])
		{
			contador++;
		}
	}
	if(contador >= comp/2) 
	{
		printf("E um palindromo!");
	}
	else(printf("Nao e um palindromo"));
	return 0;
}

