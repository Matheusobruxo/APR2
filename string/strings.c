#include <stdio.h>

int main()
{
	char fruta[20]= "abacate maduro";
	printf("Fruta = %s\n", fruta);
	printf("Digite abacaxi podre:");
	scanf("%s", fruta);
	fruta[7]=32;
	printf("Texto = %s", fruta);
	return 0;
}

